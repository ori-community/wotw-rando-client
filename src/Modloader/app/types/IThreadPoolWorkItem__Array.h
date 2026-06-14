#pragma once
#include <Modloader/app/structs/IThreadPoolWorkItem__Array.h>
#include <Modloader/app/structs/IThreadPoolWorkItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IThreadPoolWorkItem__Array {
        inline app::IThreadPoolWorkItem__Array__Class** type_info() {
            static app::IThreadPoolWorkItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IThreadPoolWorkItem__Array__Class**)(modloader::win::memory::resolve_rva(0x04771510));
            }
            return cache;
        }
        inline app::IThreadPoolWorkItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IThreadPoolWorkItem__Array__Class>(type_info(), "System.Threading", "IThreadPoolWorkItem[]");
        }
        inline app::IThreadPoolWorkItem__Array* create() {
            return il2cpp::create_object<app::IThreadPoolWorkItem__Array>(get_class());
        }
    } // namespace IThreadPoolWorkItem__Array
} // namespace app::classes::types
