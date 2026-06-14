#pragma once
#include <Modloader/app/structs/XsdDateTime.h>
#include <Modloader/app/structs/XsdDateTime__Boxed.h>
#include <Modloader/app/structs/XsdDateTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdDateTime {
        inline app::XsdDateTime__Class** type_info() {
            static app::XsdDateTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdDateTime__Class**)(modloader::win::memory::resolve_rva(0x04746FD8));
            }
            return cache;
        }
        inline app::XsdDateTime__Class* get_class() {
            return il2cpp::get_class<app::XsdDateTime__Class>(type_info(), "System.Xml.Schema", "XsdDateTime");
        }
        inline app::XsdDateTime* create() {
            return il2cpp::create_object<app::XsdDateTime>(get_class());
        }
        inline app::XsdDateTime__Boxed* box(app::XsdDateTime value) {
            return il2cpp::box_value<app::XsdDateTime__Boxed>(get_class(), value);
        }
    } // namespace XsdDateTime
} // namespace app::classes::types
