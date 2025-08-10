#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#include <Modloader/app/structs/ConstraintStruct.h>

namespace app::classes::System::Xml::Schema::ConstraintStruct {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_TableDim, app::ConstraintStruct* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234CFC0, void, ctor, app::ConstraintStruct* this_ptr, app::CompiledIdentityConstraint* constraint)
} // namespace app::classes::System::Xml::Schema::ConstraintStruct
