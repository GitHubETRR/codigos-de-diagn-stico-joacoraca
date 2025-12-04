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
            "opciones": ["Oxígeno", "Nitrógeno", "Hidrógeno"],
            "correcta": "Nitrógeno"
        }
    ],
    "Historia": [
        {
            "pregunta": "¿En qué año llegó el hombre a la Luna?",
            "opciones": ["1969", "1975", "1959"],
            "correcta": "1969"
        },
        {
            "pregunta": "¿Quién fue el primer emperador romano?",
            "opciones": ["Nerón", "Augusto", "César"],
            "correcta": "Augusto"
        }
    ],
    "Deportes": [
        {
            "pregunta": "¿Cuántos jugadores tiene un equipo de fútbol?",
            "opciones": ["11", "9", "7"],
            "correcta": "11"
        },
        {
            "pregunta": "¿En qué deporte se utiliza una raqueta?",
            "opciones": ["Tenis", "Boxeo", "Natación"],
            "correcta": "Tenis"
        }
    ],
    "Videojuegos": [
        {
            "pregunta": "¿Qué juego popular usa la frase Victory Royale al ganar?",
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

    print(f"Ronda {i+1}")
    print(f"Categoría: {categoria}")
    print(pregunta["pregunta"])

    opciones = pregunta["opciones"]
    for idx, op in enumerate(opciones):
        print(f"{idx+1}) {op}")

    resp = input("Tu respuesta (1, 2 o 3): ")

    while resp not in ["1", "2", "3"]:
        resp = input("No existe esa opción, elegí entre 1, 2 o 3.")

    eleccion = opciones[int(resp)-1]

    if eleccion == pregunta["correcta"]:
        print("Bien, respuesta correcta +1 punto\n")
        puntos += 1
    else:
        print(f"Incorrecto. La respuesta era: {pregunta['correcta']}\n")

print(f"Juego terminado. Tu puntaje final es: {puntos}/{rondas}")

