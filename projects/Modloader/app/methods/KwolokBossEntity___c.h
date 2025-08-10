#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/KwolokBossEntity_c.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>

namespace app::classes::KwolokBossEntity___c {
    IL2CPP_REGISTER_METHOD(0x012DDD90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::KwolokBossEntity_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__223_0, app::KwolokBossEntity_c* this_ptr, float* _p0_, float* _p1_, float* _p2_, float* _p3_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__223_1, app::KwolokBossEntity_c* this_ptr, float* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__223_2, app::KwolokBossEntity_c* this_ptr, float* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__223_3, app::KwolokBossEntity_c* this_ptr, app::DamageResult _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__223_4, app::KwolokBossEntity_c* this_ptr, app::List_1_Moon_CameraTargetSettings_* _p0_)
} // namespace app::classes::KwolokBossEntity___c
