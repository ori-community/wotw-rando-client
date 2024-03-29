#pragma once
#include <Modloader/app/structs/IAnimatedValueListener.h>
#include <Modloader/app/structs/IAnimatedValueListener__Array.h>
#include <Modloader/app/structs/IAnimatedValueListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimatedValueListener {
        inline app::IAnimatedValueListener__Class** type_info() {
            static app::IAnimatedValueListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAnimatedValueListener__Class**)(modloader::win::memory::resolve_rva(0x0472DC80));
            }
            return cache;
        }
        inline app::IAnimatedValueListener__Class* get_class() {
            return il2cpp::get_class<app::IAnimatedValueListener__Class>(type_info(), "Moon", "IAnimatedValueListener");
        }
        inline app::IAnimatedValueListener__Array* create_array(int size) {
            return il2cpp::array_new<app::IAnimatedValueListener__Array>(get_class(), size);
        }
        inline app::IAnimatedValueListener__Array* create_array(const std::vector<app::IAnimatedValueListener*>& items) {
            return il2cpp::array_new<app::IAnimatedValueListener__Array>(get_class(), items);
        }
    } // namespace IAnimatedValueListener
} // namespace app::classes::types
