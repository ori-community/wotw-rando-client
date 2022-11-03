#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InetractionControllerPassthrough {
        namespace {
            inline app::InetractionControllerPassthrough__Class* type_info_ref = nullptr;
        }
        inline app::InetractionControllerPassthrough__Class** type_info = &type_info_ref;
        inline app::InetractionControllerPassthrough__Class* get_class() {
            return il2cpp::get_class<app::InetractionControllerPassthrough__Class>(type_info, "", "InetractionControllerPassthrough");
        }
        inline app::InetractionControllerPassthrough* create() {
            return il2cpp::create_object<app::InetractionControllerPassthrough>(get_class());
        }
    } // namespace InetractionControllerPassthrough
} // namespace app::classes::types
