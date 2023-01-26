#pragma once
#include <Modloader/app/structs/IPv6AddressFormatter.h>
#include <Modloader/app/structs/IPv6AddressFormatter__Boxed.h>
#include <Modloader/app/structs/IPv6AddressFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPv6AddressFormatter {
        inline app::IPv6AddressFormatter__Class** type_info() {
            static app::IPv6AddressFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPv6AddressFormatter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPv6AddressFormatter__Class* get_class() {
            return il2cpp::get_class<app::IPv6AddressFormatter__Class>(type_info(), "System.Net", "IPv6AddressFormatter");
        }
        inline app::IPv6AddressFormatter* create() {
            return il2cpp::create_object<app::IPv6AddressFormatter>(get_class());
        }
        inline app::IPv6AddressFormatter__Boxed* box(app::IPv6AddressFormatter value) {
            return il2cpp::box_value<app::IPv6AddressFormatter__Boxed>(get_class(), value);
        }
    } // namespace IPv6AddressFormatter
} // namespace app::classes::types
