#pragma once
#include <Modloader/app/structs/IJobSystem__Array.h>
#include <Modloader/app/structs/IJobSystem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IJobSystem__Array {
        inline app::IJobSystem__Array__Class** type_info() {
            static app::IJobSystem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IJobSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x04705C18));
            }
            return cache;
        }
        inline app::IJobSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::IJobSystem__Array__Class>(type_info(), "Moon.Jobs", "IJobSystem[]");
        }
        inline app::IJobSystem__Array* create() {
            return il2cpp::create_object<app::IJobSystem__Array>(get_class());
        }
    } // namespace IJobSystem__Array
} // namespace app::classes::types
