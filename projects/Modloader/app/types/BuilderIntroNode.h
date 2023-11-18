#pragma once
#include <Modloader/app/structs/BuilderIntroNode.h>
#include <Modloader/app/structs/BuilderIntroNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderIntroNode {
        inline app::BuilderIntroNode__Class** type_info() {
            static app::BuilderIntroNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuilderIntroNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuilderIntroNode__Class* get_class() {
            return il2cpp::get_class<app::BuilderIntroNode__Class>(type_info(), "", "BuilderIntroNode");
        }
        inline app::BuilderIntroNode* create() {
            return il2cpp::create_object<app::BuilderIntroNode>(get_class());
        }
    } // namespace BuilderIntroNode
} // namespace app::classes::types
