#pragma once
#include <Modloader/app/structs/CommandBinding.h>
#include <Modloader/app/structs/CommandBinding__Array.h>
#include <Modloader/app/structs/CommandBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandBinding {
        inline app::CommandBinding__Class** type_info() {
            static app::CommandBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CommandBinding__Class**)(modloader::win::memory::resolve_rva(0x04764A10));
            }
            return cache;
        }
        inline app::CommandBinding__Class* get_class() {
            return il2cpp::get_class<app::CommandBinding__Class>(type_info(), "", "CommandBinding");
        }
        inline app::CommandBinding* create() {
            return il2cpp::create_object<app::CommandBinding>(get_class());
        }
        inline app::CommandBinding__Array* create_array(int size) {
            return il2cpp::array_new<app::CommandBinding__Array>(get_class(), size);
        }
        inline app::CommandBinding__Array* create_array(const std::vector<app::CommandBinding*>& items) {
            return il2cpp::array_new<app::CommandBinding__Array>(get_class(), items);
        }
    } // namespace CommandBinding
} // namespace app::classes::types
