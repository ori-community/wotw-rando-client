#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTTPRequestHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTTPRequestHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestHandle_DEFINED)
#define IL2CPP_STRUCT_HTTPRequestHandle_DEFINED
struct HTTPRequestHandle {
    uint32_t m_HTTPRequestHandle;
};
#endif
#if !defined(IL2CPP_STRUCT_HTTPRequestHandle_FWDDECL)
#define IL2CPP_STRUCT_HTTPRequestHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_HTTPRequestHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestHandle_DEFINED) && !defined(IL2CPP_STRUCT_HTTPRequestHandle_FWDDECL)
#include <Modloader/app/structs/HTTPRequestHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTTPRequestHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
