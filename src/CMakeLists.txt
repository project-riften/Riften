add_executable(riften
    main.cpp
    discord.hpp
    discord.cpp
)

target_link_libraries(riften 
    nlohmann_json
)