#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpressionStringBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpressionStringBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionStringBuilder_DEFINED)
#include <Modloader/app/structs/ExpressionStringBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionStringBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpressionStringBuilder_DEFINED
struct ExpressionStringBuilder__Class;
struct ExpressionStringBuilder {
    struct ExpressionStringBuilder__Class* klass;
    MonitorData* monitor;
    struct ExpressionStringBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpressionStringBuilder_FWDDECL)
#define IL2CPP_STRUCT_ExpressionStringBuilder_FWDDECL
#include <Modloader/app/structs/ExpressionStringBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpressionStringBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionStringBuilder_DEFINED) && !defined(IL2CPP_STRUCT_ExpressionStringBuilder_FWDDECL)
#include <Modloader/app/structs/ExpressionStringBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpressionStringBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
