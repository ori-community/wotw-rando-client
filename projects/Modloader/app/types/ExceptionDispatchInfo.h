#pragma once
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/ExceptionDispatchInfo__Array.h>
#include <Modloader/app/structs/ExceptionDispatchInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionDispatchInfo {
        inline app::ExceptionDispatchInfo__Class** type_info() {
            static app::ExceptionDispatchInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionDispatchInfo__Class**)(modloader::win::memory::resolve_rva(0x04703400));
            }
            return cache;
        }
        inline app::ExceptionDispatchInfo__Class* get_class() {
            return il2cpp::get_class<app::ExceptionDispatchInfo__Class>(type_info(), "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
        }
        inline app::ExceptionDispatchInfo* create() {
            return il2cpp::create_object<app::ExceptionDispatchInfo>(get_class());
        }
        inline app::ExceptionDispatchInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ExceptionDispatchInfo__Array>(get_class(), size);
        }
        inline app::ExceptionDispatchInfo__Array* create_array(const std::vector<app::ExceptionDispatchInfo*>& items) {
            return il2cpp::array_new<app::ExceptionDispatchInfo__Array>(get_class(), items);
        }
    } // namespace ExceptionDispatchInfo
} // namespace app::classes::types
