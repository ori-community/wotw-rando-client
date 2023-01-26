#pragma once
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Array.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer_PrewarmItem__Array {
        inline app::UberPoolGroupWarmer_PrewarmItem__Array__Class** type_info() {
            static app::UberPoolGroupWarmer_PrewarmItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolGroupWarmer_PrewarmItem__Array__Class**)(modloader::win::memory::resolve_rva(0x04770210));
            }
            return cache;
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroupWarmer_PrewarmItem__Array__Class>(type_info(), "", "UberPoolGroupWarmer+PrewarmItem[]");
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Array* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer_PrewarmItem__Array>(get_class());
        }
    } // namespace UberPoolGroupWarmer_PrewarmItem__Array
} // namespace app::classes::types
