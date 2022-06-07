#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache_Grid {
    IL2CPP_REGISTER_METHOD(0x0147BA80, bool, get_ShouldUnpack, (app::MortarEntity_AimVeloCache_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147BAA0, void, InitForGeneration, (app::MortarEntity_AimVeloCache_Grid * this_ptr, float max_spit_range))
    IL2CPP_REGISTER_METHOD(0x0147BB80, void, Pack, (app::MortarEntity_AimVeloCache_Grid * this_ptr, app::MortarEntity_AimVeloCache_Packer * packer))
    IL2CPP_REGISTER_METHOD(0x0147BCF0, void, Unpack, (app::MortarEntity_AimVeloCache_Grid * this_ptr, app::MortarEntity_AimVeloCache_Packer * packer))
    IL2CPP_REGISTER_METHOD(0x0147BE70, int32_t, XYIndexToAddress, (app::MortarEntity_AimVeloCache_Grid * this_ptr, int32_t xi, int32_t yi))
    IL2CPP_REGISTER_METHOD(0x0147BE80, int32_t, AddressToXIndex, (app::MortarEntity_AimVeloCache_Grid * this_ptr, int32_t a))
    IL2CPP_REGISTER_METHOD(0x0147BE90, int32_t, AddressToYIndex, (app::MortarEntity_AimVeloCache_Grid * this_ptr, int32_t a))
    IL2CPP_REGISTER_METHOD(0x0147BEA0, int32_t, TargetOffsetToAddress, (app::MortarEntity_AimVeloCache_Grid * this_ptr, app::Vector3 target_offset))
    IL2CPP_REGISTER_METHOD(0x0147BF30, app::Vector3, SnapOffset, (app::MortarEntity_AimVeloCache_Grid * this_ptr, app::Vector3 target_offset))
    IL2CPP_REGISTER_METHOD(0x0147C050, float, XIndexToXOffset, (app::MortarEntity_AimVeloCache_Grid * this_ptr, int32_t xi))
    IL2CPP_REGISTER_METHOD(0x0147C090, float, YIndexToYOffset, (app::MortarEntity_AimVeloCache_Grid * this_ptr, int32_t yi))
    IL2CPP_REGISTER_METHOD(0x0147C0D0, int32_t, XOffsetToXIndex, (app::MortarEntity_AimVeloCache_Grid * this_ptr, float x))
    IL2CPP_REGISTER_METHOD(0x0147C110, int32_t, YOffsetToYIndex, (app::MortarEntity_AimVeloCache_Grid * this_ptr, float y))
    IL2CPP_REGISTER_METHOD(0x0147C150, float, IndexToOffset, (app::MortarEntity_AimVeloCache_Grid * this_ptr, int32_t i, float imax, float fmin, float fmax))
    IL2CPP_REGISTER_METHOD(0x0147C240, int32_t, OffsetToIndex, (app::MortarEntity_AimVeloCache_Grid * this_ptr, float f, float fmin, float fmax, float imax))
    IL2CPP_REGISTER_METHOD(0x0147C330, bool, GetTargetVelocity, (app::MortarEntity_AimVeloCache_Grid * this_ptr, app::Vector3 entity_pos, app::Vector3 target_pos, app::Vector3 * velocity, app::MortarEntity_AimVeloCache_EntityParams * entity_debug_only))
    IL2CPP_REGISTER_METHOD(0x0147C550, void, DebugDraw, (app::MortarEntity_AimVeloCache_Grid * this_ptr, app::MortarEntity_AimVeloCache_EntityParams * entity))
    IL2CPP_REGISTER_METHOD(0x0147C7D0, void, Log, (app::MortarEntity_AimVeloCache_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MortarEntity_AimVeloCache_Grid * this_ptr))
}
