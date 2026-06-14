#pragma once
#include <Modloader/app/structs/EncodingProvider.h>
#include <Modloader/app/structs/EncodingProvider__Array.h>
#include <Modloader/app/structs/EncodingProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncodingProvider {
        inline app::EncodingProvider__Class** type_info() {
            static app::EncodingProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncodingProvider__Class**)(modloader::win::memory::resolve_rva(0x047237B0));
            }
            return cache;
        }
        inline app::EncodingProvider__Class* get_class() {
            return il2cpp::get_class<app::EncodingProvider__Class>(type_info(), "System.Text", "EncodingProvider");
        }
        inline app::EncodingProvider* create() {
            return il2cpp::create_object<app::EncodingProvider>(get_class());
        }
        inline app::EncodingProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::EncodingProvider__Array>(get_class(), size);
        }
        inline app::EncodingProvider__Array* create_array(const std::vector<app::EncodingProvider*>& items) {
            return il2cpp::array_new<app::EncodingProvider__Array>(get_class(), items);
        }
    } // namespace EncodingProvider
} // namespace app::classes::types
