#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Asttree.h>
#include <Modloader/app/structs/Asttree__Array.h>
#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#include <Modloader/app/structs/CompiledIdentityConstraint_ConstraintRole__Enum.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>

namespace app::classes::System::Xml::Schema::CompiledIdentityConstraint {
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::CompiledIdentityConstraint_ConstraintRole__Enum, get_Role, app::CompiledIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Asttree*, get_Selector, app::CompiledIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Asttree__Array*, get_Fields, app::CompiledIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019A9CA0, void, ctor_1, app::CompiledIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019A9D60,
        void,
        ctor_2,
        app::CompiledIdentityConstraint* this_ptr,
        app::XmlSchemaIdentityConstraint* constraint,
        app::XmlNamespaceManager* nsmgr
    )
    IL2CPP_REGISTER_METHOD(0x019AA2F0, void, cctor, )
} // namespace app::classes::System::Xml::Schema::CompiledIdentityConstraint
