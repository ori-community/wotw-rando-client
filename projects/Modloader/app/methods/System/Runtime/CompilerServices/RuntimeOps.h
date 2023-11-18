#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::CompilerServices::RuntimeOps {
    IL2CPP_REGISTER_METHOD(0x02FC8220, bool, ExpandoTryGetValue, (app::ExpandoObject * expando, app::Object* index_class, int32_t index, app::String* name, bool ignore_case, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x02FC8250, app::Object*, ExpandoTrySetValue, (app::ExpandoObject * expando, app::Object* index_class, int32_t index, app::Object* value, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x02FC82A0, bool, ExpandoTryDeleteValue, (app::ExpandoObject * expando, app::Object* index_class, int32_t index, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x02FC83B0, bool, ExpandoCheckVersion, (app::ExpandoObject * expando, app::Object* version))
    IL2CPP_REGISTER_METHOD(0x02FC83E0, void, ExpandoPromoteClass, (app::ExpandoObject * expando, app::Object* old_class, app::Object* new_class))
} // namespace app::classes::System::Runtime::CompilerServices::RuntimeOps
