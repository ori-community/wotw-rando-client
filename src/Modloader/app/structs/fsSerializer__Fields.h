#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsSerializer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_fsSerializer__Fields_DEFINED
struct Dictionary_2_System_Type_FullSerializer_fsBaseConverter_;
struct Dictionary_2_System_Type_List_1_FullSerializer_fsObjectProcessor_;
struct List_1_FullSerializer_fsConverter_;
struct Dictionary_2_System_Type_FullSerializer_fsDirectConverter_;
struct List_1_FullSerializer_fsObjectProcessor_;
struct fsCyclicReferenceManager;
struct fsSerializer_fsLazyCycleDefinitionWriter;
struct Dictionary_2_System_Type_System_Type_;
struct fsContext;
struct fsConfig;
struct __declspec(align(8)) fsSerializer__Fields {
    struct Dictionary_2_System_Type_FullSerializer_fsBaseConverter_* _cachedConverterTypeInstances;
    struct Dictionary_2_System_Type_FullSerializer_fsBaseConverter_* _cachedConverters;
    struct Dictionary_2_System_Type_List_1_FullSerializer_fsObjectProcessor_* _cachedProcessors;
    struct List_1_FullSerializer_fsConverter_* _availableConverters;
    struct Dictionary_2_System_Type_FullSerializer_fsDirectConverter_* _availableDirectConverters;
    struct List_1_FullSerializer_fsObjectProcessor_* _processors;
    struct fsCyclicReferenceManager* _references;
    struct fsSerializer_fsLazyCycleDefinitionWriter* _lazyReferenceWriter;
    struct Dictionary_2_System_Type_System_Type_* _abstractTypeRemap;
    struct fsContext* Context;
    struct fsConfig* Config;
};
#endif
#if !defined(IL2CPP_STRUCT_fsSerializer__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsSerializer__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsBaseConverter_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsDirectConverter_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_FullSerializer_fsObjectProcessor_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Type_.h>
#include <Modloader/app/structs/List_1_FullSerializer_fsConverter_.h>
#include <Modloader/app/structs/List_1_FullSerializer_fsObjectProcessor_.h>
#include <Modloader/app/structs/fsConfig.h>
#include <Modloader/app/structs/fsContext.h>
#include <Modloader/app/structs/fsCyclicReferenceManager.h>
#include <Modloader/app/structs/fsSerializer_fsLazyCycleDefinitionWriter.h>
#endif
#undef IL2CPP_STRUCT_fsSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsSerializer__Fields_FWDDECL)
#include <Modloader/app/structs/fsSerializer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsSerializer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
