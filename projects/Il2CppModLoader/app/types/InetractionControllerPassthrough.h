#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InetractionControllerPassthrough {
        namespace {
            app::InetractionControllerPassthrough__Class* type_info_ref = nullptr;
        }
        app::InetractionControllerPassthrough__Class** type_info = &type_info_ref;
        inline app::InetractionControllerPassthrough__Class* get_class() {
            return il2cpp::get_class<app::InetractionControllerPassthrough__Class>(type_info, "", "InetractionControllerPassthrough");
        }
        inline app::InetractionControllerPassthrough* create() {
            return il2cpp::create_object<app::InetractionControllerPassthrough>(get_class());
        }
    } // namespace InetractionControllerPassthrough
} // namespace app::classes::types
