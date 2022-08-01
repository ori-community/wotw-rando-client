#pragma once

#include <macros.h>

#include <nlohmann/json.hpp>

#include <stdint.h>

enum class Layer : int32_t {
    UI = 8,
    Sein = 9,
    Solids = 10,
    Art = 11,
    Character = 12,
    CharacterMovement = 13,
    WorldMap = 14,
    Items = 15,
    KillCharacter = 16,
    KillEverything = 17,
    PushPullBlock = 18,
    Platform = 19,
    ResampleBuffer = 20,
    CharacterMovementIgnorePlatforms = 21,
    ArtReflected = 22,
    Debris = 23,
    DebrisNoCollsion = 24,
    ArtBlurred = 25,
    Projectile = 26,
    EarlyZ = 27,
    ArtBlurredReflected = 28,
    Laser = 30,
    TerrainCollisionIgnorePlayerAndEnemies = 31
};

NLOHMANN_JSON_SERIALIZE_ENUM(Layer, {
                                            { Layer::UI, "UI" },
                                            { Layer::Sein, "Sein" },
                                            { Layer::Solids, "Solids" },
                                            { Layer::Art, "Art" },
                                            { Layer::Character, "Character" },
                                            { Layer::CharacterMovement, "CharacterMovement" },
                                            { Layer::WorldMap, "WorldMap" },
                                            { Layer::Items, "Items" },
                                            { Layer::KillCharacter, "KillCharacter" },
                                            { Layer::KillEverything, "KillEverything" },
                                            { Layer::PushPullBlock, "PushPullBlock" },
                                            { Layer::Platform, "Platform" },
                                            { Layer::ResampleBuffer, "ResampleBuffer" },
                                            { Layer::CharacterMovementIgnorePlatforms, "CharacterMovementIgnorePlatforms" },
                                            { Layer::ArtReflected, "ArtReflected" },
                                            { Layer::Debris, "Debris" },
                                            { Layer::DebrisNoCollsion, "DebrisNoCollsion" },
                                            { Layer::ArtBlurred, "ArtBlurred" },
                                            { Layer::Projectile, "Projectile" },
                                            { Layer::EarlyZ, "EarlyZ" },
                                            { Layer::ArtBlurredReflected, "ArtBlurredReflected" },
                                            { Layer::Laser, "Laser" },
                                            { Layer::TerrainCollisionIgnorePlayerAndEnemies, "TerrainCollisionIgnorePlayerAndEnemies" },
                                    });
