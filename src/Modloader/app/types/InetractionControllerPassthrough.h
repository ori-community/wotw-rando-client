#pragma once
#include <Modloader/app/structs/InetractionControllerPassthrough.h>
#include <Modloader/app/structs/InetractionControllerPassthrough__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InetractionControllerPassthrough {
        inline app::InetractionControllerPassthrough__Class** type_info() {
            static app::InetractionControllerPassthrough__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InetractionControllerPassthrough__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InetractionControllerPassthrough__Class* get_class() {
            return il2cpp::get_class<app::InetractionControllerPassthrough__Class>(type_info(), "", "InetractionControllerPassthrough");
        }
        inline app::InetractionControllerPassthrough* create() {
            return il2cpp::create_object<app::InetractionControllerPassthrough>(get_class());
        }
    } // namespace InetractionControllerPassthrough
} // namespace app::classes::types
