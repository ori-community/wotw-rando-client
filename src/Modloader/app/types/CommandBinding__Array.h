#pragma once
#include <Modloader/app/structs/CommandBinding__Array.h>
#include <Modloader/app/structs/CommandBinding__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandBinding__Array {
        inline app::CommandBinding__Array__Class** type_info() {
            static app::CommandBinding__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CommandBinding__Array__Class**)(modloader::win::memory::resolve_rva(0x04769660));
            }
            return cache;
        }
        inline app::CommandBinding__Array__Class* get_class() {
            return il2cpp::get_class<app::CommandBinding__Array__Class>(type_info(), "", "CommandBinding[]");
        }
        inline app::CommandBinding__Array* create() {
            return il2cpp::create_object<app::CommandBinding__Array>(get_class());
        }
    } // namespace CommandBinding__Array
} // namespace app::classes::types
