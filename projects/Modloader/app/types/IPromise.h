#pragma once
#include <Modloader/app/structs/IPromise.h>
#include <Modloader/app/structs/IPromise__Array.h>
#include <Modloader/app/structs/IPromise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPromise {
        inline app::IPromise__Class** type_info() {
            static app::IPromise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPromise__Class**)(modloader::win::memory::resolve_rva(0x0478BF78));
            }
            return cache;
        }
        inline app::IPromise__Class* get_class() {
            return il2cpp::get_class<app::IPromise__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IPromise");
        }
        inline app::IPromise__Array* create_array(int size) {
            return il2cpp::array_new<app::IPromise__Array>(get_class(), size);
        }
        inline app::IPromise__Array* create_array(const std::vector<app::IPromise*>& items) {
            return il2cpp::array_new<app::IPromise__Array>(get_class(), items);
        }
    } // namespace IPromise
} // namespace app::classes::types
