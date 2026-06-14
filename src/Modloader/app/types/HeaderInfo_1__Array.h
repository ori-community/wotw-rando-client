#pragma once
#include <Modloader/app/structs/HeaderInfo_1__Array.h>
#include <Modloader/app/structs/HeaderInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderInfo_1__Array {
        inline app::HeaderInfo_1__Array__Class** type_info() {
            static app::HeaderInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HeaderInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04768660));
            }
            return cache;
        }
        inline app::HeaderInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo_1__Array__Class>(type_info(), "System.Net.Http.Headers", "HeaderInfo[]");
        }
        inline app::HeaderInfo_1__Array* create() {
            return il2cpp::create_object<app::HeaderInfo_1__Array>(get_class());
        }
    } // namespace HeaderInfo_1__Array
} // namespace app::classes::types
