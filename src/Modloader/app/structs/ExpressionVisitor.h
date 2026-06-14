#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpressionVisitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpressionVisitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionVisitor_DEFINED)
#define IL2CPP_STRUCT_ExpressionVisitor_DEFINED
struct ExpressionVisitor__Class;
struct ExpressionVisitor {
    struct ExpressionVisitor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpressionVisitor_FWDDECL)
#define IL2CPP_STRUCT_ExpressionVisitor_FWDDECL
#include <Modloader/app/structs/ExpressionVisitor__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpressionVisitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionVisitor_DEFINED) && !defined(IL2CPP_STRUCT_ExpressionVisitor_FWDDECL)
#include <Modloader/app/structs/ExpressionVisitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpressionVisitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
