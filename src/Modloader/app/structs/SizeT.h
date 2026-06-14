#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SizeT_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SizeT_INITIALIZING
#if !defined(IL2CPP_STRUCT_SizeT_DEFINED)
#define IL2CPP_STRUCT_SizeT_DEFINED
struct SizeT {
    void* value;
};
#endif
#if !defined(IL2CPP_STRUCT_SizeT_FWDDECL)
#define IL2CPP_STRUCT_SizeT_FWDDECL
#endif
#undef IL2CPP_STRUCT_SizeT_INITIALIZING
#if !defined(IL2CPP_STRUCT_SizeT_DEFINED) && !defined(IL2CPP_STRUCT_SizeT_FWDDECL)
#include <Modloader/app/structs/SizeT.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SizeT.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
