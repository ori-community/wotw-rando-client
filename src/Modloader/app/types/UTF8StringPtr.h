#pragma once
#include <Modloader/app/structs/UTF8StringPtr.h>
#include <Modloader/app/structs/UTF8StringPtr__Boxed.h>
#include <Modloader/app/structs/UTF8StringPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF8StringPtr {
        inline app::UTF8StringPtr__Class** type_info() {
            static app::UTF8StringPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF8StringPtr__Class**)(modloader::win::memory::resolve_rva(0x047497E8));
            }
            return cache;
        }
        inline app::UTF8StringPtr__Class* get_class() {
            return il2cpp::get_class<app::UTF8StringPtr__Class>(type_info(), "XGamingRuntime.Interop", "UTF8StringPtr");
        }
        inline app::UTF8StringPtr* create() {
            return il2cpp::create_object<app::UTF8StringPtr>(get_class());
        }
        inline app::UTF8StringPtr__Boxed* box(app::UTF8StringPtr value) {
            return il2cpp::box_value<app::UTF8StringPtr__Boxed>(get_class(), value);
        }
    } // namespace UTF8StringPtr
} // namespace app::classes::types
