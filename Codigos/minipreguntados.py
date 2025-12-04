import random

preguntas = {
    "Ciencia": [
        {
            "pregunta": "¿Cuál es el planeta más grande del Sistema Solar?",
            "opciones": ["Marte", "Júpiter", "Venus"],
            "correcta": "Júpiter"
        },
        {
            "pregunta": "¿Qué gas respiramos principalmente?",
            "opciones": ["Oxigeno", "Nitrogeno", "Hidrogeno"],
            "correcta": "Nitrogeno"
        }
    ],
    "Historia": [
        {
            "pregunta": "¿En qué año llegó el hombre a la Luna?",
            "opciones": ["1969", "1975", "1959"],
            "correcta": "1969"
        },
        {
            "pregunta": "¿Quién fue el libertador de Argentina, Chile y Perú?",
            "opciones": ["Bolivar", "San Martin", "Belgrano"],
            "correcta": "San Martin"
        }
    ],
    "Deportes": [
        {
            "pregunta": "¿Cual fue el resultado de la final del mundo 2018 (Francia vs Croacia)?",
            "opciones": ["4-2", "2-0", "3-1"],
            "correcta": "4-2"
        },
        {
            "pregunta": "¿Quien es la persona que mas balones de oro tiene en futbol?",
            "opciones": ["Ronaldo", "Messi", "Platini"],
            "correcta": "Messi"
        }
    ],
    "Videojuegos": [
        {
            "pregunta": "¿Qué juego usa la frase Victory Royale al ganar?",
            "opciones": ["PUBG", "Fortnite", "Free Fire"],
            "correcta": "Fortnite"
        },
        {
            "pregunta": "¿Cuál es el nombre del fontanero más famoso de Nintendo?",
            "opciones": ["Luigi", "Mario", "Toad"],
            "correcta": "Mario"
        }
    ]
}

puntos = 0
rondas = 5

print("Bienvenido a Mini Preguntados\n")

for i in range(rondas):
    categoria = random.choice(list(preguntas.keys()))
    pregunta = random.choice(preguntas[categoria])

    print(f"\nRonda {i+1}")
    print(f"Categoría: {categoria}")
    print(pregunta["pregunta"])

    opciones = pregunta["opciones"]
    for ind, op in enumerate(opciones):
        print(f"{ind+1}) {op}")

    resp = input("Tu respuesta (1, 2 o 3): ")

    while resp not in ["1", "2", "3"]:
        resp = input("No existe esa opción, elegí entre 1, 2 o 3.")

    eleccion = opciones[int(resp)-1]

    if eleccion == pregunta["correcta"]:
        print("Bien, respuesta correcta +1 punto\n")
        puntos += 1
    else:
        print(f"Incorrecto. La respuesta era: {pregunta["correcta"]}\n")

print(f"Termino el juego. Tu puntaje es de: {puntos}/{rondas}")




