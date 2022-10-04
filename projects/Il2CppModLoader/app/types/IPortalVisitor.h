#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPortalVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPortalVisitor__Class** type_info;
        inline app::IPortalVisitor__Class* get_class() {
            return il2cpp::get_class<app::IPortalVisitor__Class>(type_info, "", "IPortalVisitor");
        }
        inline app::IPortalVisitor__Array* create_array(int size) {
            return il2cpp::array_new<app::IPortalVisitor__Array>(get_class(), size);
        }
    } // namespace IPortalVisitor
} // namespace app::classes::types
