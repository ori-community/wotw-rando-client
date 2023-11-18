#pragma once
#include <Modloader/app/structs/RequestCachingSection.h>
#include <Modloader/app/structs/RequestCachingSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCachingSection {
        inline app::RequestCachingSection__Class** type_info() {
            static app::RequestCachingSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RequestCachingSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RequestCachingSection__Class* get_class() {
            return il2cpp::get_class<app::RequestCachingSection__Class>(type_info(), "System.Net.Configuration", "RequestCachingSection");
        }
        inline app::RequestCachingSection* create() {
            return il2cpp::create_object<app::RequestCachingSection>(get_class());
        }
    } // namespace RequestCachingSection
} // namespace app::classes::types
