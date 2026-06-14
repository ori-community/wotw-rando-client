#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendFloat_DEFINED)
#include <Modloader/app/structs/BlendFloat__Fields.h>
#if defined(IL2CPP_STRUCT_BlendFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_BlendFloat_DEFINED
struct BlendFloat__Class;
struct BlendFloat {
    struct BlendFloat__Class* klass;
    MonitorData* monitor;
    struct BlendFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendFloat_FWDDECL)
#define IL2CPP_STRUCT_BlendFloat_FWDDECL
#include <Modloader/app/structs/BlendFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_BlendFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendFloat_DEFINED) && !defined(IL2CPP_STRUCT_BlendFloat_FWDDECL)
#include <Modloader/app/structs/BlendFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
