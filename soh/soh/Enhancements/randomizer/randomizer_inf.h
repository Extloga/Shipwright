#pragma once

typedef enum {
    RAND_INF_DUNGEONS_DONE_SPIRIT_TEMPLE,
    RAND_INF_DUNGEONS_DONE_SHADOW_TEMPLE,

    RAND_INF_COWS_MILKED_KF_LINKS_HOUSE_COW,
    RAND_INF_COWS_MILKED_HF_COW_GROTTO_COW,
    RAND_INF_COWS_MILKED_LLR_STABLES_LEFT_COW,
    RAND_INF_COWS_MILKED_LLR_STABLES_RIGHT_COW,
    RAND_INF_COWS_MILKED_LLR_TOWER_LEFT_COW,
    RAND_INF_COWS_MILKED_LLR_TOWER_RIGHT_COW,
    RAND_INF_COWS_MILKED_KAK_IMPAS_HOUSE_COW,
    RAND_INF_COWS_MILKED_DMT_COW_GROTTO_COW,
    RAND_INF_COWS_MILKED_GV_COW,
    RAND_INF_COWS_MILKED_JABU_JABUS_BELLY_MQ_COW,

    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_LEFT,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_SIDE_ROOM_NEAR_DODONGOS,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_LOBBY,
    RAND_INF_SCRUBS_PURCHASED_JABU_JABUS_BELLY_DEKU_SCRUB,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_CENTER_LEFT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_CENTER_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_LEFT,
    RAND_INF_SCRUBS_PURCHASED_HF_DEKU_SCRUB_GROTTO,
    RAND_INF_SCRUBS_PURCHASED_ZR_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_ZR_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_SFM_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_SFM_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_LH_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_LH_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_LH_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_GV_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_GV_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_GC_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_GC_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GC_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_LLR_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_LLR_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_LLR_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_COLOSSUS_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_COLOSSUS_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_NEAR_DEKU_THEATER_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_NEAR_DEKU_THEATER_LEFT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_NEAR_BRIDGE,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB,
    RAND_INF_SCRUBS_PURCHASED_DEKU_TREE_MQ_DEKU_SCRUB,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_REAR,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_FRONT,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_STAIRCASE,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_SIDE_ROOM_NEAR_LOWER_LIZALFOS,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_LEFT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_LEFT,

    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_1,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_2,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_3,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_4,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_5,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_6,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_7,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_8,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_1,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_2,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_3,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_4,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_5,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_6,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_7,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_8,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_8,

    RAND_INF_MERCHANTS_CARPET_SALESMAN,
    RAND_INF_MERCHANTS_MEDIGORON,
    RAND_INF_MERCHANTS_GRANNYS_SHOP,
    RAND_INF_MERCHANTS_MAGIC_BEAN_SALESMAN,

    RAND_INF_ADULT_TRADES_LW_TRADE_COJIRO,
    RAND_INF_ADULT_TRADES_GV_TRADE_SAW,
    RAND_INF_ADULT_TRADES_DMT_TRADE_BROKEN_SWORD,
    RAND_INF_ADULT_TRADES_ZD_TRADE_PRESCRIPTION,
    RAND_INF_ADULT_TRADES_LH_TRADE_FROG,
    RAND_INF_ADULT_TRADES_DMT_TRADE_EYEDROPS,
    RAND_INF_ADULT_TRADES_DMT_TRADE_CLAIM_CHECK,

    RAND_INF_KAK_100_GOLD_SKULLTULA_REWARD,

    RAND_INF_GREG_FOUND,


    RAND_INF_TOT_MASTER_SWORD,

    RAND_INF_CHILD_FISHING,
    RAND_INF_CHILD_FISH_1,
    RAND_INF_CHILD_FISH_2,
    RAND_INF_CHILD_FISH_3,
    RAND_INF_CHILD_FISH_4,
    RAND_INF_CHILD_FISH_5,
    RAND_INF_CHILD_FISH_6,
    RAND_INF_CHILD_FISH_7,
    RAND_INF_CHILD_FISH_8,
    RAND_INF_CHILD_FISH_9,
    RAND_INF_CHILD_FISH_10,
    RAND_INF_CHILD_FISH_11,
    RAND_INF_CHILD_FISH_12,
    RAND_INF_CHILD_FISH_13,
    RAND_INF_CHILD_FISH_14,
    RAND_INF_CHILD_FISH_15,
    RAND_INF_CHILD_LOACH_1,
    RAND_INF_CHILD_LOACH_2,
    RAND_INF_ADULT_FISHING,
    RAND_INF_ADULT_FISH_1,
    RAND_INF_ADULT_FISH_2,
    RAND_INF_ADULT_FISH_3,
    RAND_INF_ADULT_FISH_4,
    RAND_INF_ADULT_FISH_5,
    RAND_INF_ADULT_FISH_6,
    RAND_INF_ADULT_FISH_7,
    RAND_INF_ADULT_FISH_8,
    RAND_INF_ADULT_FISH_9,
    RAND_INF_ADULT_FISH_10,
    RAND_INF_ADULT_FISH_11,
    RAND_INF_ADULT_FISH_12,
    RAND_INF_ADULT_FISH_13,
    RAND_INF_ADULT_FISH_14,
    RAND_INF_ADULT_FISH_15,
    RAND_INF_ADULT_LOACH,

    RAND_INF_10_BIG_POES,
    RAND_INF_GRANT_GANONS_BOSSKEY,

    RAND_INF_GOHMA_SOUL,
    RAND_INF_KING_DODONGO_SOUL,
    RAND_INF_BARINADE_SOUL,
    RAND_INF_PHANTOM_GANON_SOUL,
    RAND_INF_VOLVAGIA_SOUL,
    RAND_INF_MORPHA_SOUL,
    RAND_INF_BONGO_BONGO_SOUL,
    RAND_INF_TWINROVA_SOUL,
    RAND_INF_GANON_SOUL,

    RAND_INF_HAS_OCARINA_A,
    RAND_INF_HAS_OCARINA_C_UP,
    RAND_INF_HAS_OCARINA_C_DOWN,
    RAND_INF_HAS_OCARINA_C_LEFT,
    RAND_INF_HAS_OCARINA_C_RIGHT,

    RAND_INF_KF_LINKS_HOUSE_POT,
    RAND_INF_KF_TWINS_HOUSE_POT_1,
    RAND_INF_KF_TWINS_HOUSE_POT_2,
    RAND_INF_KF_BROTHERS_HOUSE_POT_1,
    RAND_INF_KF_BROTHERS_HOUSE_POT_2,
    RAND_INF_GF_BREAK_ROOM_POT_1,
    RAND_INF_GF_BREAK_ROOM_POT_2,
    RAND_INF_GF_KITCHEN_POT_1,
    RAND_INF_GF_KITCHEN_POT_2,
    RAND_INF_GF_NORTH_F1_CARPENTER_POT_1,
    RAND_INF_GF_NORTH_F1_CARPENTER_POT_2,
    RAND_INF_GF_NORTH_F1_CARPENTER_POT_3,
    RAND_INF_GF_NORTH_F2_CARPENTER_POT_1,
    RAND_INF_GF_NORTH_F2_CARPENTER_POT_2,
    RAND_INF_GF_SOUTH_F1_CARPENTER_POT_1,
    RAND_INF_GF_SOUTH_F1_CARPENTER_POT_2,
    RAND_INF_GF_SOUTH_F1_CARPENTER_POT_3,
    RAND_INF_GF_SOUTH_F1_CARPENTER_CELL_POT_1,
    RAND_INF_GF_SOUTH_F1_CARPENTER_CELL_POT_2,
    RAND_INF_GF_SOUTH_F1_CARPENTER_CELL_POT_3,
    RAND_INF_GF_SOUTH_F1_CARPENTER_CELL_POT_4,
    RAND_INF_WASTELAND_NEAR_GS_POT_1,
    RAND_INF_WASTELAND_NEAR_GS_POT_2,
    RAND_INF_WASTELAND_NEAR_GS_POT_3,
    RAND_INF_WASTELAND_NEAR_GS_POT_4,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_1,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_2,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_3,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_4,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_5,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_6,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_7,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_8,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_9,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_10,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_11,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_12,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_13,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_14,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_15,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_16,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_17,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_18,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_19,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_20,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_21,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_22,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_23,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_24,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_25,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_26,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_27,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_28,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_29,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_30,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_31,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_32,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_33,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_34,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_35,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_36,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_37,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_38,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_39,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_40,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_41,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_42,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_43,
    RAND_INF_MK_GUARD_HOUSE_CHILD_POT_44,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_1,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_2,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_3,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_4,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_5,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_6,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_7,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_8,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_9,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_10,
    RAND_INF_MK_GUARD_HOUSE_ADULT_POT_11,
    RAND_INF_MK_BACK_ALLEY_HOUSE_POT_1,
    RAND_INF_MK_BACK_ALLEY_HOUSE_POT_2,
    RAND_INF_MK_BACK_ALLEY_HOUSE_POT_3,
    RAND_INF_KAK_NEAR_POTION_SHOP_POT_1,
    RAND_INF_KAK_NEAR_POTION_SHOP_POT_2,
    RAND_INF_KAK_NEAR_POTION_SHOP_POT_3,
    RAND_INF_KAK_NEAR_IMPAS_HOUSE_POT_1,
    RAND_INF_KAK_NEAR_IMPAS_HOUSE_POT_2,
    RAND_INF_KAK_NEAR_IMPAS_HOUSE_POT_3,
    RAND_INF_KAK_NEAR_GUARDS_HOUSE_POT_1,
    RAND_INF_KAK_NEAR_GUARDS_HOUSE_POT_2,
    RAND_INF_KAK_NEAR_GUARDS_HOUSE_POT_3,
    RAND_INF_KAK_NEAR_MEDICINE_SHOP_POT_1,
    RAND_INF_KAK_NEAR_MEDICINE_SHOP_POT_2,
    RAND_INF_GY_DAMPES_GRAVE_POT_1,
    RAND_INF_GY_DAMPES_GRAVE_POT_2,
    RAND_INF_GY_DAMPES_GRAVE_POT_3,
    RAND_INF_GY_DAMPES_GRAVE_POT_4,
    RAND_INF_GY_DAMPES_GRAVE_POT_5,
    RAND_INF_GY_DAMPES_GRAVE_POT_6,
    RAND_INF_GC_LOWER_STAIRCASE_POT_1,
    RAND_INF_GC_LOWER_STAIRCASE_POT_2,
    RAND_INF_GC_UPPER_STAIRCASE_POT_1,
    RAND_INF_GC_UPPER_STAIRCASE_POT_2,
    RAND_INF_GC_UPPER_STAIRCASE_POT_3,
    RAND_INF_GC_MEDIGORON_POT_1,
    RAND_INF_GC_DARUNIA_POT_1,
    RAND_INF_GC_DARUNIA_POT_2,
    RAND_INF_GC_DARUNIA_POT_3,
    RAND_INF_DMC_NEAR_GC_POT_1,
    RAND_INF_DMC_NEAR_GC_POT_2,
    RAND_INF_DMC_NEAR_GC_POT_3,
    RAND_INF_DMC_NEAR_GC_POT_4,
    RAND_INF_ZD_NEAR_SHOP_POT_1,
    RAND_INF_ZD_NEAR_SHOP_POT_2,
    RAND_INF_ZD_NEAR_SHOP_POT_3,
    RAND_INF_ZD_NEAR_SHOP_POT_4,
    RAND_INF_ZD_NEAR_SHOP_POT_5,
    RAND_INF_ZF_HIDDEN_CAVE_POT_1,
    RAND_INF_ZF_HIDDEN_CAVE_POT_2,
    RAND_INF_ZF_HIDDEN_CAVE_POT_3,
    RAND_INF_ZF_NEAR_JABU_POT_1,
    RAND_INF_ZF_NEAR_JABU_POT_2,
    RAND_INF_ZF_NEAR_JABU_POT_3,
    RAND_INF_ZF_NEAR_JABU_POT_4,
    RAND_INF_LLR_FRONT_POT_1,
    RAND_INF_LLR_FRONT_POT_2,
    RAND_INF_LLR_FRONT_POT_3,
    RAND_INF_LLR_FRONT_POT_4,
    RAND_INF_LLR_RAIN_SHED_POT_1,
    RAND_INF_LLR_RAIN_SHED_POT_2,
    RAND_INF_LLR_RAIN_SHED_POT_3,
    RAND_INF_LLR_TALONS_HOUSE_POT_1,
    RAND_INF_LLR_TALONS_HOUSE_POT_2,
    RAND_INF_LLR_TALONS_HOUSE_POT_3,
    RAND_INF_HF_COW_GROTTO_POT_1,
    RAND_INF_HF_COW_GROTTO_POT_2,
    RAND_INF_HC_STORMS_GROTTO_POT_1,
    RAND_INF_HC_STORMS_GROTTO_POT_2,
    RAND_INF_HC_STORMS_GROTTO_POT_3,
    RAND_INF_HC_STORMS_GROTTO_POT_4,

    RAND_INF_DODONGOS_CAVERN_LIZALFOS_POT_1,
    RAND_INF_DODONGOS_CAVERN_LIZALFOS_POT_2,
    RAND_INF_DODONGOS_CAVERN_LIZALFOS_POT_3,
    RAND_INF_DODONGOS_CAVERN_LIZALFOS_POT_4,
    RAND_INF_DODONGOS_CAVERN_SIDE_ROOM_POT_1,
    RAND_INF_DODONGOS_CAVERN_SIDE_ROOM_POT_2,
    RAND_INF_DODONGOS_CAVERN_SIDE_ROOM_POT_3,
    RAND_INF_DODONGOS_CAVERN_SIDE_ROOM_POT_4,
    RAND_INF_DODONGOS_CAVERN_SIDE_ROOM_POT_5,
    RAND_INF_DODONGOS_CAVERN_SIDE_ROOM_POT_6,
    RAND_INF_DODONGOS_CAVERN_TORCH_ROOM_POT_1,
    RAND_INF_DODONGOS_CAVERN_TORCH_ROOM_POT_2,
    RAND_INF_DODONGOS_CAVERN_TORCH_ROOM_POT_3,
    RAND_INF_DODONGOS_CAVERN_TORCH_ROOM_POT_4,
    RAND_INF_DODONGOS_CAVERN_STAIRCASE_POT_1,
    RAND_INF_DODONGOS_CAVERN_STAIRCASE_POT_2,
    RAND_INF_DODONGOS_CAVERN_STAIRCASE_POT_3,
    RAND_INF_DODONGOS_CAVERN_STAIRCASE_POT_4,
    RAND_INF_DODONGOS_CAVERN_SINGLE_EYE_POT_1,
    RAND_INF_DODONGOS_CAVERN_SINGLE_EYE_POT_2,
    RAND_INF_DODONGOS_CAVERN_BLADE_POT_1,
    RAND_INF_DODONGOS_CAVERN_BLADE_POT_2,
    RAND_INF_DODONGOS_CAVERN_DOUBLE_EYE_POT_1,
    RAND_INF_DODONGOS_CAVERN_DOUBLE_EYE_POT_2,
    RAND_INF_DODONGOS_CAVERN_BACK_ROOM_POT_1,
    RAND_INF_DODONGOS_CAVERN_BACK_ROOM_POT_2,
    RAND_INF_DODONGOS_CAVERN_BACK_ROOM_POT_3,
    RAND_INF_DODONGOS_CAVERN_BACK_ROOM_POT_4,
    RAND_INF_JABU_JABUS_BELLY_ABOVE_BIG_OCTO_POT_1,
    RAND_INF_JABU_JABUS_BELLY_ABOVE_BIG_OCTO_POT_2,
    RAND_INF_JABU_JABUS_BELLY_ABOVE_BIG_OCTO_POT_3,
    RAND_INF_JABU_JABUS_BELLY_BARINADE_POT_1,
    RAND_INF_JABU_JABUS_BELLY_BARINADE_POT_2,
    RAND_INF_JABU_JABUS_BELLY_BARINADE_POT_3,
    RAND_INF_JABU_JABUS_BELLY_BARINADE_POT_4,
    RAND_INF_JABU_JABUS_BELLY_BARINADE_POT_5,
    RAND_INF_JABU_JABUS_BELLY_BARINADE_POT_6,
    RAND_INF_JABU_JABUS_BELLY_BASEMENT_POT_1,
    RAND_INF_JABU_JABUS_BELLY_BASEMENT_POT_2,
    RAND_INF_JABU_JABUS_BELLY_BASEMENT_POT_3,
    RAND_INF_JABU_JABUS_BELLY_TWO_OCTOROK_POT_1,
    RAND_INF_JABU_JABUS_BELLY_TWO_OCTOROK_POT_2,
    RAND_INF_JABU_JABUS_BELLY_TWO_OCTOROK_POT_3,
    RAND_INF_JABU_JABUS_BELLY_TWO_OCTOROK_POT_4,
    RAND_INF_JABU_JABUS_BELLY_TWO_OCTOROK_POT_5,
    RAND_INF_FOREST_TEMPLE_LOBBY_POT_1,
    RAND_INF_FOREST_TEMPLE_LOBBY_POT_2,
    RAND_INF_FOREST_TEMPLE_LOBBY_POT_3,
    RAND_INF_FOREST_TEMPLE_LOBBY_POT_4,
    RAND_INF_FOREST_TEMPLE_LOBBY_POT_5,
    RAND_INF_FOREST_TEMPLE_LOBBY_POT_6,
    RAND_INF_FOREST_TEMPLE_LOWER_STALFOS_POT_1,
    RAND_INF_FOREST_TEMPLE_LOWER_STALFOS_POT_2,
    RAND_INF_FOREST_TEMPLE_GREEN_POE_POT_1,
    RAND_INF_FOREST_TEMPLE_GREEN_POE_POT_2,
    RAND_INF_FOREST_TEMPLE_UPPER_STALFOS_POT_1,
    RAND_INF_FOREST_TEMPLE_UPPER_STALFOS_POT_2,
    RAND_INF_FOREST_TEMPLE_UPPER_STALFOS_POT_3,
    RAND_INF_FOREST_TEMPLE_UPPER_STALFOS_POT_4,
    RAND_INF_FOREST_TEMPLE_BLUE_POE_POT_1,
    RAND_INF_FOREST_TEMPLE_BLUE_POE_POT_2,
    RAND_INF_FOREST_TEMPLE_BLUE_POE_POT_3,
    RAND_INF_FOREST_TEMPLE_FROZEN_EYE_POT_1,
    RAND_INF_FOREST_TEMPLE_FROZEN_EYE_POT_2,
    RAND_INF_FIRE_TEMPLE_NEAR_BOSS_POT_1,
    RAND_INF_FIRE_TEMPLE_NEAR_BOSS_POT_2,
    RAND_INF_FIRE_TEMPLE_NEAR_BOSS_POT_3,
    RAND_INF_FIRE_TEMPLE_NEAR_BOSS_POT_4,
    RAND_INF_FIRE_TEMPLE_BIG_LAVA_POT_1,
    RAND_INF_FIRE_TEMPLE_BIG_LAVA_POT_2,
    RAND_INF_FIRE_TEMPLE_BIG_LAVA_POT_3,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_LEFT_POT_1,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_LEFT_POT_2,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_LEFT_POT_3,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_LEFT_POT_4,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_RIGHT_POT_1,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_RIGHT_POT_2,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_RIGHT_POT_3,
    RAND_INF_FIRE_TEMPLE_FLAME_MAZE_RIGHT_POT_4,
    RAND_INF_WATER_TEMPLE_MAIN_LEVEL_2_POT_1,
    RAND_INF_WATER_TEMPLE_MAIN_LEVEL_2_POT_2,
    RAND_INF_WATER_TEMPLE_MAIN_LEVEL_1_POT_1,
    RAND_INF_WATER_TEMPLE_MAIN_LEVEL_1_POT_2,
    RAND_INF_WATER_TEMPLE_TORCH_POT_1,
    RAND_INF_WATER_TEMPLE_TORCH_POT_2,
    RAND_INF_WATER_TEMPLE_NEAR_COMPASS_POT_1,
    RAND_INF_WATER_TEMPLE_NEAR_COMPASS_POT_2,
    RAND_INF_WATER_TEMPLE_NEAR_COMPASS_POT_3,
    RAND_INF_WATER_TEMPLE_CENTRAL_BOW_POT_1,
    RAND_INF_WATER_TEMPLE_CENTRAL_BOW_POT_2,
    RAND_INF_WATER_TEMPLE_BEHIND_GATE_POT_1,
    RAND_INF_WATER_TEMPLE_BEHIND_GATE_POT_2,
    RAND_INF_WATER_TEMPLE_BEHIND_GATE_POT_3,
    RAND_INF_WATER_TEMPLE_BEHIND_GATE_POT_4,
    RAND_INF_WATER_TEMPLE_BASEMENT_BLOCK_PUZZLE_POT_1,
    RAND_INF_WATER_TEMPLE_BASEMENT_BLOCK_PUZZLE_POT_2,
    RAND_INF_WATER_TEMPLE_RIVER_POT_1,
    RAND_INF_WATER_TEMPLE_RIVER_POT_2,
    RAND_INF_WATER_TEMPLE_LIKE_LIKE_POT_1,
    RAND_INF_WATER_TEMPLE_LIKE_LIKE_POT_2,
    RAND_INF_WATER_TEMPLE_BOSS_KEY_POT_1,
    RAND_INF_WATER_TEMPLE_BOSS_KEY_POT_2,
    RAND_INF_SHADOW_TEMPLE_NEAR_DEAD_HAND_POT_1,
    RAND_INF_SHADOW_TEMPLE_WHISPERING_WALLS_POT_1,
    RAND_INF_SHADOW_TEMPLE_WHISPERING_WALLS_POT_2,
    RAND_INF_SHADOW_TEMPLE_WHISPERING_WALLS_POT_3,
    RAND_INF_SHADOW_TEMPLE_WHISPERING_WALLS_POT_4,
    RAND_INF_SHADOW_TEMPLE_WHISPERING_WALLS_POT_5,
    RAND_INF_SHADOW_TEMPLE_MAP_CHEST_POT_1,
    RAND_INF_SHADOW_TEMPLE_MAP_CHEST_POT_2,
    RAND_INF_SHADOW_TEMPLE_FALLING_SPIKES_POT_1,
    RAND_INF_SHADOW_TEMPLE_FALLING_SPIKES_POT_2,
    RAND_INF_SHADOW_TEMPLE_FALLING_SPIKES_POT_3,
    RAND_INF_SHADOW_TEMPLE_FALLING_SPIKES_POT_4,
    RAND_INF_SHADOW_TEMPLE_AFTER_WIND_POT_1,
    RAND_INF_SHADOW_TEMPLE_AFTER_WIND_POT_2,
    RAND_INF_SHADOW_TEMPLE_SPIKE_WALLS_POT_1,
    RAND_INF_SHADOW_TEMPLE_FLOORMASTER_POT_1,
    RAND_INF_SHADOW_TEMPLE_FLOORMASTER_POT_2,
    RAND_INF_SHADOW_TEMPLE_AFTER_BOAT_POT_1,
    RAND_INF_SHADOW_TEMPLE_AFTER_BOAT_POT_2,
    RAND_INF_SHADOW_TEMPLE_AFTER_BOAT_POT_3,
    RAND_INF_SHADOW_TEMPLE_AFTER_BOAT_POT_4,
    RAND_INF_SPIRIT_TEMPLE_LOBBY_POT_1,
    RAND_INF_SPIRIT_TEMPLE_LOBBY_POT_2,
    RAND_INF_SPIRIT_TEMPLE_ANUBIS_POT_1,
    RAND_INF_SPIRIT_TEMPLE_ANUBIS_POT_2,
    RAND_INF_SPIRIT_TEMPLE_ANUBIS_POT_3,
    RAND_INF_SPIRIT_TEMPLE_ANUBIS_POT_4,
    RAND_INF_SPIRIT_TEMPLE_CHILD_CLIMB_POT_1,
    RAND_INF_SPIRIT_TEMPLE_AFTER_SUN_BLOCK_POT_1,
    RAND_INF_SPIRIT_TEMPLE_AFTER_SUN_BLOCK_POT_2,
    RAND_INF_SPIRIT_TEMPLE_CENTRAL_CHAMBER_POT_1,
    RAND_INF_SPIRIT_TEMPLE_CENTRAL_CHAMBER_POT_2,
    RAND_INF_SPIRIT_TEMPLE_CENTRAL_CHAMBER_POT_3,
    RAND_INF_SPIRIT_TEMPLE_CENTRAL_CHAMBER_POT_4,
    RAND_INF_SPIRIT_TEMPLE_CENTRAL_CHAMBER_POT_5,
    RAND_INF_SPIRIT_TEMPLE_CENTRAL_CHAMBER_POT_6,
    RAND_INF_SPIRIT_TEMPLE_BEAMOS_HALL_POT_1,
    RAND_INF_GANONS_CASTLE_FOREST_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_FOREST_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_FIRE_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_FIRE_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_WATER_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_WATER_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_WATER_TRIAL_POT_3,
    RAND_INF_GANONS_CASTLE_SHADOW_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_SHADOW_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_SHADOW_TRIAL_POT_3,
    RAND_INF_GANONS_CASTLE_SHADOW_TRIAL_POT_4,
    RAND_INF_GANONS_CASTLE_SPIRIT_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_SPIRIT_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_LIGHT_TRIAL_BOULDER_POT_1,
    RAND_INF_GANONS_CASTLE_LIGHT_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_LIGHT_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_1,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_2,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_3,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_4,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_5,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_6,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_7,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_8,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_9,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_10,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_11,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_12,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_13,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_14,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_15,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_16,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_17,
    RAND_INF_GANONS_CASTLE_GANONS_TOWER_POT_18,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_1,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_2,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_3,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_4,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_5,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_6,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_7,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_8,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_9,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_10,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_11,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_POT_12,
    RAND_INF_BOTTOM_OF_THE_WELL_LEFT_SIDE_POT_1,
    RAND_INF_BOTTOM_OF_THE_WELL_LEFT_SIDE_POT_2,
    RAND_INF_BOTTOM_OF_THE_WELL_LEFT_SIDE_POT_3,
    RAND_INF_BOTTOM_OF_THE_WELL_NEAR_ENTRANCE_POT_1,
    RAND_INF_BOTTOM_OF_THE_WELL_NEAR_ENTRANCE_POT_2,
    RAND_INF_BOTTOM_OF_THE_WELL_FIRE_KEESE_POT_1,
    RAND_INF_BOTTOM_OF_THE_WELL_UNDERWATER_POT,
    RAND_INF_ICE_CAVERN_HALL_POT_1,
    RAND_INF_ICE_CAVERN_HALL_POT_2,
    RAND_INF_ICE_CAVERN_SPINNING_BLADE_POT_1,
    RAND_INF_ICE_CAVERN_SPINNING_BLADE_POT_2,
    RAND_INF_ICE_CAVERN_SPINNING_BLADE_POT_3,
    RAND_INF_ICE_CAVERN_NEAR_END_POT_1,
    RAND_INF_ICE_CAVERN_NEAR_END_POT_2,
    RAND_INF_ICE_CAVERN_FROZEN_POT_1,

    RAND_INF_JABU_JABUS_BELLY_MQ_ENTRANCE_POT_1,
    RAND_INF_JABU_JABUS_BELLY_MQ_ENTRANCE_POT_2,
    RAND_INF_JABU_JABUS_BELLY_MQ_GEYSER_POT_1,
    RAND_INF_JABU_JABUS_BELLY_MQ_GEYSER_POT_2,
    RAND_INF_JABU_JABUS_BELLY_MQ_TIME_BLOCK_POT_1,
    RAND_INF_JABU_JABUS_BELLY_MQ_TIME_BLOCK_POT_2,
    RAND_INF_JABU_JABUS_BELLY_MQ_LIKE_LIKES_POT_1,
    RAND_INF_JABU_JABUS_BELLY_MQ_LIKE_LIKES_POT_2,
    RAND_INF_JABU_JABUS_BELLY_MQ_BEFORE_BOSS_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_LOBBY_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_LOBBY_POT_2,
    RAND_INF_FOREST_TEMPLE_MQ_LOBBY_POT_3,
    RAND_INF_FOREST_TEMPLE_MQ_LOBBY_POT_4,
    RAND_INF_FOREST_TEMPLE_MQ_LOBBY_POT_5,
    RAND_INF_FOREST_TEMPLE_MQ_LOBBY_POT_6,
    RAND_INF_FOREST_TEMPLE_MQ_LOWER_STALFOS_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_LOWER_STALFOS_POT_2,
    RAND_INF_FOREST_TEMPLE_MQ_UPPER_STALFOS_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_UPPER_STALFOS_POT_2,
    RAND_INF_FOREST_TEMPLE_MQ_UPPER_STALFOS_POT_3,
    RAND_INF_FOREST_TEMPLE_MQ_UPPER_STALFOS_POT_4,
    RAND_INF_FOREST_TEMPLE_MQ_BLUE_POE_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_BLUE_POE_POT_2,
    RAND_INF_FOREST_TEMPLE_MQ_BLUE_POE_POT_3,
    RAND_INF_FOREST_TEMPLE_MQ_GREEN_POE_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_GREEN_POE_POT_2,
    RAND_INF_FOREST_TEMPLE_MQ_BASEMENT_POT_1,
    RAND_INF_FOREST_TEMPLE_MQ_BASEMENT_POT_2,
    RAND_INF_FOREST_TEMPLE_MQ_BASEMENT_POT_3,
    RAND_INF_FOREST_TEMPLE_MQ_BASEMENT_POT_4,
    RAND_INF_DODONGOS_CAVERN_MQ_RIGHT_SIDE_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_RIGHT_SIDE_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_RIGHT_SIDE_POT_3,
    RAND_INF_DODONGOS_CAVERN_MQ_RIGHT_SIDE_POT_4,
    RAND_INF_DODONGOS_CAVERN_MQ_UPPER_LIZALFOS_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_UPPER_LIZALFOS_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_UPPER_LIZALFOS_POT_3,
    RAND_INF_DODONGOS_CAVERN_MQ_UPPER_LIZALFOS_POT_4,
    RAND_INF_DODONGOS_CAVERN_MQ_POE_ROOM_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_POE_ROOM_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_POE_ROOM_POT_3,
    RAND_INF_DODONGOS_CAVERN_MQ_POE_ROOM_POT_4,
    RAND_INF_DODONGOS_CAVERN_MQ_BLOCK_ROOM_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_BLOCK_ROOM_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_TWO_FLAMES_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_TWO_FLAMES_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_SILVER_BLOCK_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_SILVER_BLOCK_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_STAIRCASE_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_STAIRCASE_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_STAIRCASE_POT_3,
    RAND_INF_DODONGOS_CAVERN_MQ_STAIRCASE_POT_4,
    RAND_INF_DODONGOS_CAVERN_MQ_ARMOS_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_ARMOS_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_ARMOS_POT_3,
    RAND_INF_DODONGOS_CAVERN_MQ_ARMOS_POT_4,
    RAND_INF_DODONGOS_CAVERN_MQ_BEFORE_BOSS_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_BEFORE_BOSS_POT_2,
    RAND_INF_DODONGOS_CAVERN_MQ_BACKROOM_POT_1,
    RAND_INF_DODONGOS_CAVERN_MQ_BACKROOM_POT_2,
    RAND_INF_GANONS_CASTLE_MQ_FOREST_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_MQ_FOREST_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_MQ_WATER_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_MQ_WATER_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_MQ_SHADOW_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_MQ_SHADOW_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_MQ_FIRE_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_MQ_FIRE_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_MQ_LIGHT_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_MQ_LIGHT_TRIAL_POT_2,
    RAND_INF_GANONS_CASTLE_MQ_SPIRIT_TRIAL_POT_1,
    RAND_INF_GANONS_CASTLE_MQ_SPIRIT_TRIAL_POT_2,
    RAND_INF_SHADOW_TEMPLE_MQ_WHISPERING_WALLS_POT_1,
    RAND_INF_SHADOW_TEMPLE_MQ_WHISPERING_WALLS_POT_2,
    RAND_INF_SHADOW_TEMPLE_MQ_ENTRANCE_REDEAD_POT_1,
    RAND_INF_SHADOW_TEMPLE_MQ_ENTRANCE_REDEAD_POT_2,
    RAND_INF_SHADOW_TEMPLE_MQ_FALLING_SPIKES_POT_1,
    RAND_INF_SHADOW_TEMPLE_MQ_FALLING_SPIKES_POT_2,
    RAND_INF_SHADOW_TEMPLE_MQ_FALLING_SPIKES_POT_3,
    RAND_INF_SHADOW_TEMPLE_MQ_FALLING_SPIKES_POT_4,
    RAND_INF_SHADOW_TEMPLE_MQ_BEFORE_BOAT_POT_1,
    RAND_INF_SHADOW_TEMPLE_MQ_BEFORE_BOAT_POT_2,
    RAND_INF_SHADOW_TEMPLE_MQ_AFTER_BOAT_POT_1,
    RAND_INF_SHADOW_TEMPLE_MQ_AFTER_BOAT_POT_2,
    RAND_INF_SHADOW_TEMPLE_MQ_AFTER_BOAT_POT_3,
    RAND_INF_SHADOW_TEMPLE_MQ_AFTER_BOAT_POT_4,
    RAND_INF_SHADOW_TEMPLE_MQ_SPIKE_BARICADE_POT,
    RAND_INF_SHADOW_TEMPLE_MQ_DEAD_HAND_POT_1,
    RAND_INF_SHADOW_TEMPLE_MQ_DEAD_HAND_POT_2,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_INNER_LOBBY_POT_1,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_INNER_LOBBY_POT_2,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_INNER_LOBBY_POT_3,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_OUTER_LOBBY_POT,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_SOUTH_KEY_POT_1,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_SOUTH_KEY_POT_2,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_SOUTH_KEY_POT_3,
    RAND_INF_FIRE_TEMPLE_MQ_ENTRANCE_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_ENTRANCE_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_OUTSIDE_BOSS_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_OUTSIDE_BOSS_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_LAVA_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_LAVA_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_LAVA_POT_3,
    RAND_INF_FIRE_TEMPLE_MQ_LAVA_TORCH_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_LAVA_TORCH_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_ABOVE_LAVA_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_ABOVE_LAVA_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_ABOVE_LAVA_POT_3,
    RAND_INF_FIRE_TEMPLE_MQ_FLAME_WALL_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_FLAME_WALL_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_FIRE_MAZE_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_FIRE_MAZE_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_FIRE_MAZE_POT_3,
    RAND_INF_FIRE_TEMPLE_MQ_FIRE_MAZE_POT_4,
    RAND_INF_FIRE_TEMPLE_MQ_FIRE_MAZE_POT_5,
    RAND_INF_FIRE_TEMPLE_MQ_FIRE_MAZE_POT_6,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_1,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_2,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_3,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_4,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_5,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_6,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_7,
    RAND_INF_FIRE_TEMPLE_MQ_BEFORE_MINI_BOSS_POT_8,
    RAND_INF_ICE_CAVERN_MQ_ENTRANCE_POT,
    RAND_INF_ICE_CAVERN_MQ_FIRST_CRYSTAL_POT_1,
    RAND_INF_ICE_CAVERN_MQ_FIRST_CRYSTAL_POT_2,
    RAND_INF_ICE_CAVERN_MQ_EARLY_WOLFOS_POT_1,
    RAND_INF_ICE_CAVERN_MQ_EARLY_WOLFOS_POT_2,
    RAND_INF_ICE_CAVERN_MQ_EARLY_WOLFOS_POT_3,
    RAND_INF_ICE_CAVERN_MQ_EARLY_WOLFOS_POT_4,
    RAND_INF_ICE_CAVERN_MQ_PUSH_BLOCK_POT_1,
    RAND_INF_ICE_CAVERN_MQ_PUSH_BLOCK_POT_2,
    RAND_INF_ICE_CAVERN_MQ_COMPASS_POT_1,
    RAND_INF_ICE_CAVERN_MQ_COMPASS_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_ENTRANCE_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_ENTRANCE_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_ENTRANCE_POT_3,
    RAND_INF_SPIRIT_TEMPLE_MQ_ENTRANCE_POT_4,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_SLUGMA_POT,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_GIBDO_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_GIBDO_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_LIKE_LIKE_POT,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_STALFOS_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_STALFOS_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_STALFOS_POT_3,
    RAND_INF_SPIRIT_TEMPLE_MQ_CHILD_STALFOS_POT_4,
    RAND_INF_SPIRIT_TEMPLE_MQ_CENTRAL_CHAMBER_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_CENTRAL_CHAMBER_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_CENTRAL_CHAMBER_POT_3,
    RAND_INF_SPIRIT_TEMPLE_MQ_CENTRAL_CHAMBER_POT_4,
    RAND_INF_SPIRIT_TEMPLE_MQ_CENTRAL_CHAMBER_POT_5,
    RAND_INF_SPIRIT_TEMPLE_MQ_SUN_BLOCKS_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_SUN_BLOCKS_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_LONG_CLIMB_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_LONG_CLIMB_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_BIG_MIRROR_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_BIG_MIRROR_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_BIG_MIRROR_POT_3,
    RAND_INF_SPIRIT_TEMPLE_MQ_BIG_MIRROR_POT_4,
    RAND_INF_SPIRIT_TEMPLE_MQ_BEFORE_MIRROR_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_BEFORE_MIRROR_POT_2,
    RAND_INF_SPIRIT_TEMPLE_MQ_EARLY_ADULT_POT_1,
    RAND_INF_SPIRIT_TEMPLE_MQ_EARLY_ADULT_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_CENTRAL_GATE_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_CENTRAL_GATE_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_CENTRAL_GATE_POT_3,
    RAND_INF_WATER_TEMPLE_MQ_CENTRAL_GATE_POT_4,
    RAND_INF_WATER_TEMPLE_MQ_CENTRAL_GATE_POT_5,
    RAND_INF_WATER_TEMPLE_MQ_STORAGE_ROOM_A_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_STORAGE_ROOM_A_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_STORAGE_ROOM_A_POT_3,
    RAND_INF_WATER_TEMPLE_MQ_BEFORE_DARK_LINK_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_BEFORE_DARK_LINK_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_BEFORE_DARK_LINK_POT_3,
    RAND_INF_WATER_TEMPLE_MQ_BEFORE_DARK_LINK_POT_4,
    RAND_INF_WATER_TEMPLE_MQ_BEFORE_DARK_LINK_POT_5,
    RAND_INF_WATER_TEMPLE_MQ_AFTER_DARK_LINK_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_AFTER_DARK_LINK_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_RIVER_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_RIVER_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_MINI_DODONGO_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_MINI_DODONGO_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_STORAGE_ROOM_B_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_STORAGE_ROOM_B_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_GS_STORAGE_ROOM_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_GS_STORAGE_ROOM_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_GS_STORAGE_ROOM_POT_3,
    RAND_INF_WATER_TEMPLE_MQ_LOWER_TORCHES_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_LOWER_TORCHES_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_LOWEST_GS_POT_1,
    RAND_INF_WATER_TEMPLE_MQ_LOWEST_GS_POT_2,
    RAND_INF_WATER_TEMPLE_MQ_LOWEST_GS_POT_3,
    RAND_INF_WATER_TEMPLE_MQ_LOWEST_GS_POT_4,
    RAND_INF_WATER_TEMPLE_MQ_BOSS_KEY_POT,
    RAND_INF_GERUDO_TRAINING_GROUND_MQ_LOBBY_LEFT_POT_1,
    RAND_INF_GERUDO_TRAINING_GROUND_MQ_LOBBY_LEFT_POT_2,
    RAND_INF_GERUDO_TRAINING_GROUND_MQ_LOBBY_RIGHT_POT_1,
    RAND_INF_GERUDO_TRAINING_GROUND_MQ_LOBBY_RIGHT_POT_2,

    
    RAND_INF_CAUGHT_LOACH,

    RAND_INF_CAN_SWIM,

    RAND_INF_HAS_WALLET,

    RAND_INF_BEEHIVE_KF_STORMS_GROTTO_LEFT,
    RAND_INF_BEEHIVE_KF_STORMS_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_LW_NEAR_SHORTCUTS_GROTTO_LEFT,
    RAND_INF_BEEHIVE_LW_NEAR_SHORTCUTS_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_LW_DEKU_SCRUB_GROTTO,
    RAND_INF_BEEHIVE_SFM_STORMS_GROTTO,
    RAND_INF_BEEHIVE_HF_NEAR_MARKET_GROTTO_LEFT,
    RAND_INF_BEEHIVE_HF_NEAR_MARKET_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_HF_OPEN_GROTTO_LEFT,
    RAND_INF_BEEHIVE_HF_OPEN_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_HF_SOUTHEAST_GROTTO_LEFT,
    RAND_INF_BEEHIVE_HF_SOUTHEAST_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_HF_INSIDE_FENCE_GROTTO,
    RAND_INF_BEEHIVE_LLR_GROTTO,
    RAND_INF_BEEHIVE_KAK_OPEN_GROTTO_LEFT,
    RAND_INF_BEEHIVE_KAK_OPEN_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_DMT_COW_GROTTO,
    RAND_INF_BEEHIVE_DMT_STORMS_GROTTO_LEFT,
    RAND_INF_BEEHIVE_DMT_STORMS_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_GC_GROTTO,
    RAND_INF_BEEHIVE_DMC_UPPER_GROTTO_LEFT,
    RAND_INF_BEEHIVE_DMC_UPPER_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_DMC_HAMMER_GROTTO,
    RAND_INF_BEEHIVE_ZR_OPEN_GROTTO_LEFT,
    RAND_INF_BEEHIVE_ZR_OPEN_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_ZR_STORMS_GROTTO,
    RAND_INF_BEEHIVE_ZD_IN_FRONT_OF_KING_ZORA_LEFT,
    RAND_INF_BEEHIVE_ZD_IN_FRONT_OF_KING_ZORA_RIGHT,
    RAND_INF_BEEHIVE_ZD_BEHIND_KING_ZORA,
    RAND_INF_BEEHIVE_LH_GROTTO,
    RAND_INF_BEEHIVE_GV_DEKU_SCRUB_GROTTO,
    RAND_INF_BEEHIVE_COLOSSUS_GROTTO,

    RAND_INF_GROTTO_FISH_ZR_OPEN_GROTTO,
    RAND_INF_GROTTO_FISH_DMC_UPPER_GROTTO,
    RAND_INF_GROTTO_FISH_DMT_STORMS_GROTTO,
    RAND_INF_GROTTO_FISH_KAK_OPEN_GROTTO,
    RAND_INF_GROTTO_FISH_HF_NEAR_MARKET_GROTTO,
    RAND_INF_GROTTO_FISH_HF_OPEN_GROTTO,
    RAND_INF_GROTTO_FISH_HF_SOUTHEAST_GROTTO,
    RAND_INF_GROTTO_FISH_LW_NEAR_SHORTCUTS_GROTTO,
    RAND_INF_GROTTO_FISH_KF_STORMS_GROTTO,

    RAND_INF_FISHING_POLE_FOUND,

    RAND_INF_ZD_FISH_1,
    RAND_INF_ZD_FISH_2,
    RAND_INF_ZD_FISH_3,
    RAND_INF_ZD_FISH_4,
    RAND_INF_ZD_FISH_5,

    RAND_INF_HAS_INFINITE_QUIVER,
    RAND_INF_HAS_INFINITE_BOMB_BAG,
    RAND_INF_HAS_INFINITE_BULLET_BAG,
    RAND_INF_HAS_INFINITE_STICK_UPGRADE,
    RAND_INF_HAS_INFINITE_NUT_UPGRADE,
    RAND_INF_HAS_INFINITE_MAGIC_METER,
    RAND_INF_HAS_INFINITE_BOMBCHUS,
    RAND_INF_HAS_INFINITE_MONEY,

    RAND_INF_HAS_SKELETON_KEY,

    RAND_INF_LINKS_POCKET,
    RAND_INF_LEARNED_EPONA_SONG,
    RAND_INF_DARUNIAS_JOY,
    RAND_INF_KING_ZORA_THAWED,

    RAND_INF_HC_GREAT_FAIRY_REWARD,
    RAND_INF_DMT_GREAT_FAIRY_REWARD,
    RAND_INF_DMC_GREAT_FAIRY_REWARD,
    RAND_INF_ZF_GREAT_FAIRY_REWARD,
    RAND_INF_COLOSSUS_GREAT_FAIRY_REWARD,
    RAND_INF_OGC_GREAT_FAIRY_REWARD,

    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_1,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_2,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_3,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_4,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_5,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_1,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_2,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_3,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_4,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_5,

    RAND_INF_GF_ITEM_FROM_LEADER_OF_FORTRESS,
    RAND_INF_GF_GTG_GATE_PERMANENTLY_OPEN,

    RAND_INF_ZELDAS_LETTER,
    RAND_INF_WEIRD_EGG,
    RAND_INF_CHILD_TRADES_MASK_KEATON,
    RAND_INF_CHILD_TRADES_MASK_SKULL,
    RAND_INF_CHILD_TRADES_MASK_SPOOKY,
    RAND_INF_CHILD_TRADES_MASK_BUNNY,
    RAND_INF_CHILD_TRADES_MASK_GORON,
    RAND_INF_CHILD_TRADES_MASK_ZORA,
    RAND_INF_CHILD_TRADES_MASK_GERUDO,
    RAND_INF_CHILD_TRADES_MASK_TRUTH,
    // If you add anything to this list, you need to update the size of randomizerInf in z64save.h to be ceil(RAND_INF_MAX / 16)

    RAND_INF_MAX,
} RandomizerInf;
