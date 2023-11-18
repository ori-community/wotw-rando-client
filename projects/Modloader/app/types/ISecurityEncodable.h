#pragma once
#include <Modloader/app/structs/ISecurityEncodable.h>
#include <Modloader/app/structs/ISecurityEncodable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISecurityEncodable {
        inline app::ISecurityEncodable__Class** type_info() {
            static app::ISecurityEncodable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISecurityEncodable__Class**)(modloader::win::memory::resolve_rva(0x0472C680));
            }
            return cache;
        }
        inline app::ISecurityEncodable__Class* get_class() {
            return il2cpp::get_class<app::ISecurityEncodable__Class>(type_info(), "System.Security", "ISecurityEncodable");
        }
    } // namespace ISecurityEncodable
} // namespace app::classes::types
