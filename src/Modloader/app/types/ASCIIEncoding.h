#pragma once
#include <Modloader/app/structs/ASCIIEncoding.h>
#include <Modloader/app/structs/ASCIIEncoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ASCIIEncoding {
        inline app::ASCIIEncoding__Class** type_info() {
            static app::ASCIIEncoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ASCIIEncoding__Class**)(modloader::win::memory::resolve_rva(0x04767970));
            }
            return cache;
        }
        inline app::ASCIIEncoding__Class* get_class() {
            return il2cpp::get_class<app::ASCIIEncoding__Class>(type_info(), "System.Text", "ASCIIEncoding");
        }
        inline app::ASCIIEncoding* create() {
            return il2cpp::create_object<app::ASCIIEncoding>(get_class());
        }
    } // namespace ASCIIEncoding
} // namespace app::classes::types
