#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIMesh_DEFINED)
#include <Modloader/app/structs/PointerUIMesh__Fields.h>
#if defined(IL2CPP_STRUCT_PointerUIMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerUIMesh_DEFINED
struct PointerUIMesh__Class;
struct PointerUIMesh {
    struct PointerUIMesh__Class* klass;
    MonitorData* monitor;
    struct PointerUIMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIMesh_FWDDECL)
#define IL2CPP_STRUCT_PointerUIMesh_FWDDECL
#include <Modloader/app/structs/PointerUIMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerUIMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIMesh_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIMesh_FWDDECL)
#include <Modloader/app/structs/PointerUIMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
