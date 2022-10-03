#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderIntroNode {
        namespace {
            app::BuilderIntroNode__Class* type_info_ref = nullptr;
        }
        app::BuilderIntroNode__Class** type_info = &type_info_ref;
        inline app::BuilderIntroNode__Class* get_class() {
            return il2cpp::get_class<app::BuilderIntroNode__Class>(type_info, "", "BuilderIntroNode");
        }
        inline app::BuilderIntroNode* create() {
            return il2cpp::create_object<app::BuilderIntroNode>(get_class());
        }
    } // namespace BuilderIntroNode
} // namespace app::classes::types
