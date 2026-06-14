#pragma once
#include <Modloader/app/structs/EChaperoneImportFlags__Enum.h>
#include <Modloader/app/structs/EChaperoneImportFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EChaperoneImportFlags__Enum {
        inline app::EChaperoneImportFlags__Enum__Class** type_info() {
            static app::EChaperoneImportFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EChaperoneImportFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EChaperoneImportFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChaperoneImportFlags__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EChaperoneImportFlags");
        }
        inline app::EChaperoneImportFlags__Enum* create() {
            return il2cpp::create_object<app::EChaperoneImportFlags__Enum>(get_class());
        }
    } // namespace EChaperoneImportFlags__Enum
} // namespace app::classes::types
