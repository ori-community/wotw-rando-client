#pragma once
#include <Modloader/app/structs/StringWithQualityHeaderValue.h>
#include <Modloader/app/structs/StringWithQualityHeaderValue__Array.h>
#include <Modloader/app/structs/StringWithQualityHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringWithQualityHeaderValue {
        inline app::StringWithQualityHeaderValue__Class** type_info() {
            static app::StringWithQualityHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047810E0));
            }
            return cache;
        }
        inline app::StringWithQualityHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::StringWithQualityHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "StringWithQualityHeaderValue");
        }
        inline app::StringWithQualityHeaderValue* create() {
            return il2cpp::create_object<app::StringWithQualityHeaderValue>(get_class());
        }
        inline app::StringWithQualityHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::StringWithQualityHeaderValue__Array>(get_class(), size);
        }
        inline app::StringWithQualityHeaderValue__Array* create_array(const std::vector<app::StringWithQualityHeaderValue*>& items) {
            return il2cpp::array_new<app::StringWithQualityHeaderValue__Array>(get_class(), items);
        }
    } // namespace StringWithQualityHeaderValue
} // namespace app::classes::types
