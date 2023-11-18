#pragma once
#include <Modloader/app/structs/EncodedStreamFactory.h>
#include <Modloader/app/structs/EncodedStreamFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncodedStreamFactory {
        inline app::EncodedStreamFactory__Class** type_info() {
            static app::EncodedStreamFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EncodedStreamFactory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EncodedStreamFactory__Class* get_class() {
            return il2cpp::get_class<app::EncodedStreamFactory__Class>(type_info(), "System.Net.Mime", "EncodedStreamFactory");
        }
        inline app::EncodedStreamFactory* create() {
            return il2cpp::create_object<app::EncodedStreamFactory>(get_class());
        }
    } // namespace EncodedStreamFactory
} // namespace app::classes::types
