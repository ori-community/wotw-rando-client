#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorSerializer_DEFINED)
#define IL2CPP_STRUCT_VectorSerializer_DEFINED
struct VectorSerializer__Class;
struct VectorSerializer {
    struct VectorSerializer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_VectorSerializer_FWDDECL)
#define IL2CPP_STRUCT_VectorSerializer_FWDDECL
#include <Modloader/app/structs/VectorSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_VectorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorSerializer_DEFINED) && !defined(IL2CPP_STRUCT_VectorSerializer_FWDDECL)
#include <Modloader/app/structs/VectorSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
