#pragma once
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/CancellationCallbackInfo__Array.h>
#include <Modloader/app/structs/CancellationCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellationCallbackInfo {
        inline app::CancellationCallbackInfo__Class** type_info() {
            static app::CancellationCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancellationCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0476A230));
            }
            return cache;
        }
        inline app::CancellationCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::CancellationCallbackInfo__Class>(type_info(), "System.Threading", "CancellationCallbackInfo");
        }
        inline app::CancellationCallbackInfo* create() {
            return il2cpp::create_object<app::CancellationCallbackInfo>(get_class());
        }
        inline app::CancellationCallbackInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::CancellationCallbackInfo__Array>(get_class(), size);
        }
        inline app::CancellationCallbackInfo__Array* create_array(const std::vector<app::CancellationCallbackInfo*>& items) {
            return il2cpp::array_new<app::CancellationCallbackInfo__Array>(get_class(), items);
        }
    } // namespace CancellationCallbackInfo
} // namespace app::classes::types
