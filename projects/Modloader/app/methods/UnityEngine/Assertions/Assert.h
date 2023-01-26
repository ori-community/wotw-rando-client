#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::UnityEngine::Assertions::Assert {
    IL2CPP_REGISTER_METHOD(0x0241D4C0, void, Fail, (app::String * message, app::String* user_message))
    IL2CPP_REGISTER_METHOD(0x0241D720, void, AreEqual_1, (app::Object_1 * expected, app::Object_1* actual, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0241D820, void, AreEqual_2, (int32_t expected, int32_t actual))
    IL2CPP_REGISTER_METHOD(0x0241D980, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x015E3DE0, void, AreEqual_3, (app::Object * expected, app::Object* actual, app::String* message))
    IL2CPP_REGISTER_METHOD(0x015E3ED0, void, AreEqual_4, (app::Object * expected, app::Object* actual, app::String* message, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x015E3A30, void, AreEqual_5, (int32_t expected, int32_t actual, app::String* message))
    IL2CPP_REGISTER_METHOD(0x015E3B20, void, AreEqual_6, (int32_t expected, int32_t actual, app::String* message, app::IEqualityComparer_1_System_Int32_* comparer))
} // namespace app::classes::UnityEngine::Assertions::Assert
