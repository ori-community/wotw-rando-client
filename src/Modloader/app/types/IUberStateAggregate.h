#pragma once
#include <Modloader/app/structs/IUberStateAggregate.h>
#include <Modloader/app/structs/IUberStateAggregate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateAggregate {
        inline app::IUberStateAggregate__Class** type_info() {
            static app::IUberStateAggregate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateAggregate__Class**)(modloader::win::memory::resolve_rva(0x047823D0));
            }
            return cache;
        }
        inline app::IUberStateAggregate__Class* get_class() {
            return il2cpp::get_class<app::IUberStateAggregate__Class>(type_info(), "Moon", "IUberStateAggregate");
        }
    } // namespace IUberStateAggregate
} // namespace app::classes::types
