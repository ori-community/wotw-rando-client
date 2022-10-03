#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidBlob {
        namespace {
            app::AcidBlob__Class* type_info_ref = nullptr;
        }
        app::AcidBlob__Class** type_info = &type_info_ref;
        inline app::AcidBlob__Class* get_class() {
            return il2cpp::get_class<app::AcidBlob__Class>(type_info, "", "AcidBlob");
        }
        inline app::AcidBlob* create() {
            return il2cpp::create_object<app::AcidBlob>(get_class());
        }
    } // namespace AcidBlob
} // namespace app::classes::types
