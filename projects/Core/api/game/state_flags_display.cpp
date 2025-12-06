#include <Modloader/app/methods/UnityEngine/GUI.h>
#include <Modloader/app/methods/UnityEngine/GUIStyle.h>
#include <Modloader/app/methods/UnityEngine/Screen.h>
#include <Modloader/app/methods/Moon/ImGuiManager.h>
#include <Modloader/app/methods/SeinAbilities.h>
#include <Modloader/app/types/GUIStyle.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <string>
#include <unordered_map>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>

namespace {
    using namespace modloader::win;
    using namespace app::classes;

    const std::vector<std::pair<int, std::string>> STATE_FLAGS{
        // {0,             "Clear"                         },
        {1,             "IsPlayingAnimation"            },
        {2,             "IsCrouching"                   },
        {4,             "IsGrabbingBlock"               },
        {8,             "IsGrabbingWall"                },
        {16,            "IsGliding"                     },
        {32,            "IsSwimming"                    },
        {64,            "IsBashing"                     },
        {128,           "IsCarrying"                    },
        {256,           "IsStomping"                    },
        {512,           "IsSuspended"                   },
        {1024,          "IsDashing"                     },
        {2048,          "IsStandingOnEdge"              },
        {4096,          "IsUnderwater"                  },
        {8192,          "CannotMove"                    },
        {16384,         "IsPerformingCinematic"         },
        {32768,         "IsInteracting"                 },
        {65536,         "IsRiding"                      },
        {131072,        "IsInputLocked"                 },
        {262144,        "IsDigging"                     },
        {524288,        "IsGrabbingSurface"             },
        {1048576,       "IsGrabbingRope"                },
        {2097152,       "IsChargeJumping"               },
        {4194304,       "IsCastingSpell"                },
        {8388608,       "IsUsingLever"                  },
        {16777216,      "IsRacing"                      },
        {33554432,      "IsUsingMelee"                  },
        {67108864,      "IsPerformingCombo"             },
        {134217728,     "IsSpiritLeashing"              },
        {268435456,     "IsFalling"                     },
        {536870912,     "IsDisabledDueToDamage"         },
        {1073741824,    "IsFeatherFlapping"             },
        {2147483648,    "IsBowAttacking"                },
        {4294967296,    "IsAttacking"                   },
        {8589934592,    "IsHolding"                     },
        {17179869184,   "IsStressTesting"               },
        {34359738368,   "IsThrowing"                    },
        {68719476736,   "CanGrabSomething"              },
        {137438953472,  "IsLeverBlockingInput"          },
        {274877906944,  "IsPickingUp"                   },
        {549755813888,  "IsUsingHeldItem"               },
        {1099511627776, "IsTouchingDamageColliders"     },
        {2199023255552, "IsTeleporting"                 },
        {4398046511104, "IsBowAttackingAndNotCancelable"},
        {137439133696,  "BlockInput"                    },
        // {0,             "BlockInvincibility"            },
        // {0,             "BlockAirNoDeceleration"        },
        {16384,         "BlockApplyFrictionToSpeed"     },
        {49153,         "BlockCrushDetector"            },
        // {0,             "BlockSpriteRotater"            },
        {16385,         "BlockDamageReciever"           }, // sic
        {278529,        "BlockJumpSustain"              },
        {16385,         "BlockUpwardsDeceleration"      },
        {16385,         "BlockForceController"          },
        {344065,        "BlockGravity"                  },
        {344097,        "BlockGravityToGround"          },
        {3539008,       "BlockSpellAbility"             },
        // {0,             "BlockSwimming"                 },
        {138461184,     "BlockDigging"                  },
        {1623318981,    "BlockDash"                     },
        {533016037,     "BlockGetAbility"               },
        {142934112,     "BlockLaunch"                   },
        {12903909,      "BlockRiding"                   },
        {4399266054244, "BlockSpell"                    },
        {4403561819365, "BlockGrenadeSpell"             },
        {13435367,      "BlockSpiritLeash"              },
        {1746141284,    "BlockBow"                      },
        {2200235475008, "BlockHammer"                   },
        {3025407377504, "BlockMelee"                    },
        {3024730832960, "BlockCombo"                    },
        {2218519232576, "BlockGrabRope"                 },
        {2231274635332, "BlockGrabSurface"              },
        {536887329,     "BlockInstantStop"              },
        {53249,         "BlockLeftRightMovement"        },
        {4398228226053, "BlockBash"                     },
        {2252603425,    "BlockLooking"                  },
        {4522341,       "BlockLever"                    },
        {138674533,     "BlockInteraction"              },
        {327713,        "BlockFootsteps"                },
        {1099517772273, "BlockWallSlide"                },
        {4522336,       "BlockCarry"                    },
        {262176,        "BlockHolding"                  },
        {376929,        "BlockFall"                     },
        {2199027778017, "BlockGrabBlock"                },
        {378085,        "BlockIdle"                     },
        {312549,        "BlockRun"                      },
        {34498430369,   "BlockCrouching"                },
        {3305082995169, "BlockWallGrabbing"             },
        {38060337,      "BlockJumping"                  },
        {38011297,      "BlockDoubleJump"               },
        {4471270508009, "BlockGliding"                  },
        {4473265,       "BlockWallJump"                 },
        {147112421,     "BlockChargeJump"               },
        {4456865,       "BlockStandingOnEdge"           },
        {3298535145633, "BlockPushAgainstWall"          },
        {262305,        "BlockEdgeClamber"              },
        {135004192,     "BlockTeleport"                 },
        {148111364,     "BlockChakramSpell"             },
        {8699941,       "BlockMeditateSpell"            },
        {147193860,     "BlockTurretSpell"              },
        {4466975540713, "BlockFeatherFlap"              },
        // {0,             "BlockAbilityUI"                },
        {2203341291520, "BlockShrineCombat"             },
        {2149056584,    "ResetComboCooldown"            },
    };

    common::Droppable::ptr_t on_after_gui;
    std::optional<il2cpp::GCRef<app::GUIStyle>> gui_style;

    void set_state_flags_display(std::string const&, std::vector<console::CommandParam> const& params) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return;
        }

        bool enable;
        if (!console::try_get_bool(params[0], enable)) {
            console::console_send("Invalid argument. Expected boolean (on/off)");
            return;
        }

        if (enable && on_after_gui == nullptr) {
            Moon::ImGuiManager::RegisterClient();

            on_after_gui = core::api::game::event_bus().register_handler(GameEvent::GUI, EventTiming::After, [](auto, auto) {
                if (!gui_style.has_value()) {
                    auto gui_style_instance = types::GUIStyle::create();
                    UnityEngine::GUIStyle::ctor_2(gui_style_instance, UnityEngine::GUI::get_skin()->fields.m_label);
                    UnityEngine::GUIStyle::set_alignment(gui_style_instance, app::TextAnchor__Enum::LowerRight);
                    gui_style = il2cpp::GCRef(gui_style_instance);
                }

                std::string new_label_text;

                const auto sein = core::api::game::player::sein();

                if (sein != nullptr) {
                    const auto sein_jump = SeinAbilities::get_Jump(sein->fields.Abilities);

                    new_label_text += std::format("Coyote Time: {}s", sein_jump->fields.m_timeWeCanJumpRemaining);

                    const auto state_flags = sein->fields.LogicCycle->fields.m_stateFlags;

                    for (const auto& [state_flag, state_name]: STATE_FLAGS) {
                        if (static_cast<int>(state_flags) & state_flag) {
                            new_label_text += "\n";
                            new_label_text += state_name;
                        }
                    }
                }

                UnityEngine::GUI::Label_4(
                    app::Rect{
                        static_cast<float>(UnityEngine::Screen::get_width()) - 300.f - 6.f,
                        static_cast<float>(UnityEngine::Screen::get_height()) - 900.f - 6.f,
                        300.f,
                        900.f
                    },
                    il2cpp::string_new(new_label_text),
                    **gui_style
                );
            });
        } else if (!enable && on_after_gui != nullptr) {
            Moon::ImGuiManager::UnregisterClient();
            on_after_gui = nullptr;
            gui_style = std::nullopt;
        }

        console::console_send(std::format("State flags display {}", enable ? "enabled" : "disabled"));
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        console::register_command({"debug", "set_state_flags_display"}, set_state_flags_display, true);
    });
} // namespace
