#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MoonTrail.h>
#include <Modloader/app/structs/MoonTrail_SimulationFrameData.h>
#include <Modloader/app/structs/TrailPathProvider.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/IMaterialPropertyBlockProvider.h>
#include <Modloader/app/structs/MoonTrailUpdateContext.h>
#include <Modloader/app/structs/List_1_Moon_MoonTrail_SimulationFrameData_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle.h>

namespace app::classes::Moon::MoonTrail {
    IL2CPP_REGISTER_METHOD(0x0255A8C0, app::MoonTrail_MoonTrailParticle__Array*, AcquireParticleBuffer, ())
    IL2CPP_REGISTER_METHOD(0x0255A9C0, void, ReturnParticleBuffer, (app::MoonTrail_MoonTrailParticle__Array * *buffer))
    IL2CPP_REGISTER_METHOD(0x0255AA90, void, ClearAllParticleBuffers, ())
    IL2CPP_REGISTER_METHOD(0x0255AB60, app::Bounds, get_Bounds, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255AB80, void, set_Bounds, (app::MoonTrail * this_ptr, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x0255ABA0, bool, get_IsSimulatingBasedOnFrameData, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255AC30, app::MoonTrail_SimulationFrameData, get_CurrentSimulationFrame, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01211A10, bool, get_IsSuspended, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01211A20, void, set_IsSuspended, (app::MoonTrail * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0255AD00, bool, get_UsingPathProviderForFirstTarget, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255ADB0, bool, get_UsingPathProviderForSecondTarget, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255AE60, app::TrailPathProvider*, get_FirstTargetPathProvider, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255AF40, app::TrailPathProvider*, get_SecondTargetPathProvider, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AED7A0, int32_t, get_FramesToSkip, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AED7B0, void, set_FramesToSkip, (app::MoonTrail * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0255B020, bool, get_UsingTwoTargets, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B1A0, app::Vector3, get_TargetPosition, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B1F0, app::Vector3, get_TargetNormal, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F26B0, float, get_DeltaTime, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B290, int32_t, get_Subdivisions, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B2B0, int32_t, get_TrailParticleCount, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B2F0, int32_t, get_DynamicParticleIndxStart, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B370, float, get_EffectiveInitialThickness, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B3A0, app::Renderer*, get_Renderer, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B470, app::MeshFilter*, get_MeshFilter, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B540, bool, get_ShouldCalculateDynamicParticles, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B550, app::Camera*, get_Camera, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FB820, void, SetMaterialPropertyBlockProvider, (app::MoonTrail * this_ptr, app::IMaterialPropertyBlockProvider* material_property_block_provider))
    IL2CPP_REGISTER_METHOD(0x0255B650, void, OnValidate, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B6A0, void, OnEnable, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B820, app::Vector3, GetTargetPosition, (app::MoonTrail * this_ptr, bool using_two_targets))
    IL2CPP_REGISTER_METHOD(0x0255BF20, app::Vector3, GetTargetNormal, (app::MoonTrail * this_ptr, bool using_two_targets, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x0255C480, float, GetEffectiveInitialThickness, (app::MoonTrail * this_ptr, bool using_two_targets))
    IL2CPP_REGISTER_METHOD(0x0255C710, void, InitializeTrail, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255CB20, void, OnDisable, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255CCE0, void, Awake, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255CFE0, void, OnDestroy, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255CFE0, void, MoonCleanup, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255D000, void, PrepareForUpdate, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255D300, void, FillUpdateContextData, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255D880, void, LateUpdate, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255D990, void, OnEmitStateChanged, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255B650, void, UpdateResolutionData, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255DA30, void, Reset, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255DA80, void, Simulate_1, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255DC70, void, Simulate_2, (app::MoonTrail * this_ptr, app::List_1_Moon_MoonTrail_SimulationFrameData_* frames))
    IL2CPP_REGISTER_METHOD(0x0255E000, void, SimulateForPathProvider, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255E6A0, void, SimulateDynamic, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255E8A0, void, UpdateEmission, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255EAE0, void, EmitParticlesTo, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx, app::Nullable_1_UnityEngine_Vector3_ last_control_point))
    IL2CPP_REGISTER_METHOD(0x0255EF30, void, EmitParticle, (app::MoonTrail * this_ptr, float delta_time, app::Vector3 position, app::Vector3 normal, float thickness))
    IL2CPP_REGISTER_METHOD(0x0255F8C0, void, UpdateControlPoints, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255FD90, void, UpdateDynamicParticles, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025600F0, void, UpdateParticles, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x02560C80, void, UpdateTranformDelta, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x02560D90, void, PreDefaultUv, (app::MoonTrail * this_ptr, int32_t amount_of_particles))
    IL2CPP_REGISTER_METHOD(0x02560DB0, void, UpdateTrailLenght, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02561030, void, UpdateBounds, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0255DA30, void, ClearTrailData_1, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02561450, void, ClearTrailData_2, (app::MoonTrail * this_ptr, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x025615D0, void, UpdateRenderingData, (app::MoonTrail * this_ptr, app::MoonTrailUpdateContext* ctx))
    IL2CPP_REGISTER_METHOD(0x02561FF0, void, OnDrawGizmos, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02562540, void, DrawDebugParticle, (app::MoonTrail * this_ptr, app::MoonTrail_MoonTrailParticle particle, bool sphere))
    IL2CPP_REGISTER_METHOD(0x02562B90, void, ctor, (app::MoonTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025630B0, void, cctor, ())
} // namespace app::classes::Moon::MoonTrail
