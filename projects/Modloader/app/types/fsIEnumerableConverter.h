#pragma once
#include <Modloader/app/structs/fsIEnumerableConverter.h>
#include <Modloader/app/structs/fsIEnumerableConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsIEnumerableConverter {
        inline app::fsIEnumerableConverter__Class** type_info() {
            static app::fsIEnumerableConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsIEnumerableConverter__Class**)(modloader::win::memory::resolve_rva(0x04755830));
            }
            return cache;
        }
        inline app::fsIEnumerableConverter__Class* get_class() {
            return il2cpp::get_class<app::fsIEnumerableConverter__Class>(type_info(), "FullSerializer.Internal", "fsIEnumerableConverter");
        }
        inline app::fsIEnumerableConverter* create() {
            return il2cpp::create_object<app::fsIEnumerableConverter>(get_class());
        }
    } // namespace fsIEnumerableConverter
} // namespace app::classes::types
