#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISecurityEncodable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISecurityEncodable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISecurityEncodable_DEFINED)
#define IL2CPP_STRUCT_ISecurityEncodable_DEFINED
struct ISecurityEncodable__Class;
struct ISecurityEncodable {
    struct ISecurityEncodable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISecurityEncodable_FWDDECL)
#define IL2CPP_STRUCT_ISecurityEncodable_FWDDECL
#include <Modloader/app/structs/ISecurityEncodable__Class.h>
#endif
#undef IL2CPP_STRUCT_ISecurityEncodable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISecurityEncodable_DEFINED) && !defined(IL2CPP_STRUCT_ISecurityEncodable_FWDDECL)
#include <Modloader/app/structs/ISecurityEncodable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISecurityEncodable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
