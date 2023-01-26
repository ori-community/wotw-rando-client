#pragma once
#include <Modloader/app/structs/Assembly_ResolveEventHolder.h>
#include <Modloader/app/structs/Assembly_ResolveEventHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Assembly_ResolveEventHolder {
        inline app::Assembly_ResolveEventHolder__Class** type_info() {
            static app::Assembly_ResolveEventHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Assembly_ResolveEventHolder__Class**)(modloader::win::memory::resolve_rva(0x04721778));
            }
            return cache;
        }
        inline app::Assembly_ResolveEventHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::Assembly_ResolveEventHolder__Class>(type_info(), "System.Reflection", "Assembly", "ResolveEventHolder");
        }
        inline app::Assembly_ResolveEventHolder* create() {
            return il2cpp::create_object<app::Assembly_ResolveEventHolder>(get_class());
        }
    } // namespace Assembly_ResolveEventHolder
} // namespace app::classes::types
