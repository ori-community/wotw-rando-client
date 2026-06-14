#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisAlignedBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisAlignedBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisAlignedBox_DEFINED)
#include <Modloader/app/structs/AxisAlignedBox__Fields.h>
#if defined(IL2CPP_STRUCT_AxisAlignedBox__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisAlignedBox_DEFINED
struct AxisAlignedBox__Class;
struct AxisAlignedBox {
    struct AxisAlignedBox__Class* klass;
    MonitorData* monitor;
    struct AxisAlignedBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisAlignedBox_FWDDECL)
#define IL2CPP_STRUCT_AxisAlignedBox_FWDDECL
#include <Modloader/app/structs/AxisAlignedBox__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisAlignedBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisAlignedBox_DEFINED) && !defined(IL2CPP_STRUCT_AxisAlignedBox_FWDDECL)
#include <Modloader/app/structs/AxisAlignedBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisAlignedBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
