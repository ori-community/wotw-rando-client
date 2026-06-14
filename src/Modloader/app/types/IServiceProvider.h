#pragma once
#include <Modloader/app/structs/IServiceProvider.h>
#include <Modloader/app/structs/IServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IServiceProvider {
        inline app::IServiceProvider__Class** type_info() {
            static app::IServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04709510));
            }
            return cache;
        }
        inline app::IServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::IServiceProvider__Class>(type_info(), "System", "IServiceProvider");
        }
    } // namespace IServiceProvider
} // namespace app::classes::types
