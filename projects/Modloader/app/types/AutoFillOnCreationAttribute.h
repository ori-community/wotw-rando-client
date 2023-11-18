#pragma once
#include <Modloader/app/structs/AutoFillOnCreationAttribute.h>
#include <Modloader/app/structs/AutoFillOnCreationAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoFillOnCreationAttribute {
        inline app::AutoFillOnCreationAttribute__Class** type_info() {
            static app::AutoFillOnCreationAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoFillOnCreationAttribute__Class**)(modloader::win::memory::resolve_rva(0x04739EB8));
            }
            return cache;
        }
        inline app::AutoFillOnCreationAttribute__Class* get_class() {
            return il2cpp::get_class<app::AutoFillOnCreationAttribute__Class>(type_info(), "Moon.Timeline", "AutoFillOnCreationAttribute");
        }
        inline app::AutoFillOnCreationAttribute* create() {
            return il2cpp::create_object<app::AutoFillOnCreationAttribute>(get_class());
        }
    } // namespace AutoFillOnCreationAttribute
} // namespace app::classes::types
