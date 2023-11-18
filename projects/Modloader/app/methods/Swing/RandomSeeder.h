#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RandomSeeder.h>
#include <Modloader/app/structs/Angle.h>
#include <Modloader/app/structs/AngleRange.h>
#include <Modloader/app/structs/FloatRange.h>
#include <Modloader/app/structs/IntRange.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::Swing::RandomSeeder {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_seed, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D340, void, set_seed, (app::RandomSeeder * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D4B0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D4C0, void, ctor_1, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D570, void, ctor_2, (app::RandomSeeder * this_ptr, int32_t _seed))
    IL2CPP_REGISTER_METHOD(0x0182D6D0, void, reset, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D820, void, reseed, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D8D0, int32_t, get_nextSeed, ())
    IL2CPP_REGISTER_METHOD(0x0182D9B0, int32_t, nextInt_1, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D9E0, int32_t, nextInt_2, (app::RandomSeeder * this_ptr, int32_t _min, int32_t _max))
    IL2CPP_REGISTER_METHOD(0x0182DA10, float, nextInt_3, (app::RandomSeeder * this_ptr, app::IntRange _range))
    IL2CPP_REGISTER_METHOD(0x0182DA50, bool, nextBool, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182DA90, float, nextFloat_1, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182DAC0, float, nextFloat_2, (app::RandomSeeder * this_ptr, float _min, float _max))
    IL2CPP_REGISTER_METHOD(0x0182DBB0, float, nextFloat_3, (app::RandomSeeder * this_ptr, app::FloatRange _range))
    IL2CPP_REGISTER_METHOD(0x0182DC90, app::Angle, nextAngle_1, (app::RandomSeeder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182DD90, app::Angle, nextAngle_2, (app::RandomSeeder * this_ptr, app::AngleRange _range))
    IL2CPP_REGISTER_METHOD(0x0182DEA0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x016ABF00, app::Object*, nextItem_1, (app::RandomSeeder * this_ptr, app::Object__Array* _array))
    IL2CPP_REGISTER_METHOD(0x016ABE70, app::Object*, nextItem_2, (app::RandomSeeder * this_ptr, app::List_1_System_Object_* _list))
} // namespace app::classes::Swing::RandomSeeder
