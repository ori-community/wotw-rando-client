#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalDefinition__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterExpression.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LocalDefinition {
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor, app::LocalDefinition__Boxed* this_ptr, int32_t local_index, app::ParameterExpression* parameter)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, app::LocalDefinition__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::ParameterExpression*, get_Parameter, app::LocalDefinition__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EAD40, bool, Equals, app::LocalDefinition__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001EAD50, int32_t, GetHashCode, app::LocalDefinition__Boxed* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LocalDefinition
