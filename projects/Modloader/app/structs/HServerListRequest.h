#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HServerListRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HServerListRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerListRequest_DEFINED)
#define IL2CPP_STRUCT_HServerListRequest_DEFINED
struct HServerListRequest {
    void* m_HServerListRequest;
};
#endif
#if !defined(IL2CPP_STRUCT_HServerListRequest_FWDDECL)
#define IL2CPP_STRUCT_HServerListRequest_FWDDECL
#endif
#undef IL2CPP_STRUCT_HServerListRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerListRequest_DEFINED) && !defined(IL2CPP_STRUCT_HServerListRequest_FWDDECL)
#include <Modloader/app/structs/HServerListRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HServerListRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
