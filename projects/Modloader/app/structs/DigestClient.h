#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigestClient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigestClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestClient_DEFINED)
#define IL2CPP_STRUCT_DigestClient_DEFINED
struct DigestClient__Class;
struct DigestClient {
    struct DigestClient__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DigestClient_FWDDECL)
#define IL2CPP_STRUCT_DigestClient_FWDDECL
#include <Modloader/app/structs/DigestClient__Class.h>
#endif
#undef IL2CPP_STRUCT_DigestClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestClient_DEFINED) && !defined(IL2CPP_STRUCT_DigestClient_FWDDECL)
#include <Modloader/app/structs/DigestClient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigestClient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
